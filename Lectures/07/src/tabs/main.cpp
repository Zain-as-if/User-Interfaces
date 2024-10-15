// Example of a tabbed layout using QTabWidget

#include <QtWidgets>
#include <iostream>

int main(int argc, char* argv[])
{
  if (argc < 2 || argc > 6) {
    std::cerr << "Usage: " << argv[0] << " <img1> [...<img5>]" << std::endl;
    return 1;
  }

  QApplication app(argc, argv);

  // Create and configure the widget

  QTabWidget* window = new QTabWidget();

  window->setWindowTitle("QTabWidget Example");
  window->setTabPosition(QTabWidget::South);
  //window->setTabShape(QTabWidget::Triangular);

  for (int i = 1; i < argc; ++i) {
    // Load image and assign it to a label

    QPixmap image(argv[i]);
    QLabel* label = new QLabel();
    label->setPixmap(image);

    // Create a scrollable view of the image

    QScrollArea* view = new QScrollArea();
    view->setBackgroundRole(QPalette::Dark);
    view->setWidget(label);

    // Add view to a new tab

    window->addTab(view, argv[i]);
  }

  window->show();

  return app.exec();
}

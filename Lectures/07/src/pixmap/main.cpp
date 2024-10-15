// Example of displaying an image on a label in Qt

#include <QtWidgets>
#include <iostream>

int main(int argc, char* argv[])
{
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
    return 1;
  }

  QApplication app(argc, argv);

  QPixmap image(argv[1]);

  QLabel* widget = new QLabel();
  widget->setPixmap(image);
  //widget->setAlignment(Qt::AlignCenter);
  widget->setMargin(10);

  widget->setWindowTitle("QPixmap");
  widget->show();

  return app.exec();
}

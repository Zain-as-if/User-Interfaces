// Example of creating & configuring a QSlider

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QSlider* slider = new QSlider(Qt::Horizontal);
  slider->setRange(1, 100);
  slider->setTickPosition(QSlider::TicksBothSides);

  slider->setMinimumWidth(300);
  slider->setMinimumHeight(60);
  slider->setWindowTitle("QSlider Example");
  slider->show();

  return app.exec();
}

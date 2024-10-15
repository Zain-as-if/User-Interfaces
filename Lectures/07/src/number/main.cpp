// Example of creating & configuring QCDNumber

#include <QtWidgets>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QLCDNumber* number = new QLCDNumber(6);

  number->setSegmentStyle(QLCDNumber::Flat);
  number->display(123);

  number->setWindowTitle("QLCDNumber");
  number->resize(240, 90);
  number->show();

  return app.exec();
}

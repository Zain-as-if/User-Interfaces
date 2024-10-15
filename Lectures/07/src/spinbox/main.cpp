// Example of creating & configuring a QSpinBox

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QSpinBox* spinbox = new QSpinBox();
  spinbox->setRange(-10, 10);
  spinbox->setFont(QFont("Helvetica", 24));

  spinbox->setMinimumWidth(240);
  spinbox->setMinimumHeight(40);
  spinbox->setWindowTitle("QSpinBox Example");
  spinbox->show();

  return app.exec();
}

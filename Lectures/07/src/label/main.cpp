// Label configuration in Qt

#include <QtWidgets>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QLabel* label = new QLabel("Hello World!");

  label->setFont(QFont("Helvetica", 48, QFont::Bold));
  label->setStyleSheet("color: red");
  label->setMargin(30);
  label->setAlignment(Qt::AlignCenter);

  label->setWindowTitle("QLabel");
  label->show();

  return app.exec();
}

#include <QtWidgets>

int main(int argc, char* argv[])
{

  QApplication app(argc, argv);
  QFont font("Times", 14, QFont::Bold);
  QLabel* widget = new QLabel("<h1>Hello World!</h1>");
  widget->setStyleSheet("color: violet");
  widget->setAlignment(Qt::AlignCenter);
  widget->show();

  return app.exec();
}

#include <QtWidgets>  // <1>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);  // <2>

  QLabel* label = new QLabel("<h1>Hello World!</h1>");  // <3>
  label->show();  // <4>

  return app.exec();  // <5>
}

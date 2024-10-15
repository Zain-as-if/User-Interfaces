// Custom slot example - main program

#include <QApplication>
#include "controller.hpp"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  Controller* control = new Controller();

  control->setWindowTitle("Controller v2");
  control->setMinimumWidth(200);
  control->show();

  return app.exec();
}

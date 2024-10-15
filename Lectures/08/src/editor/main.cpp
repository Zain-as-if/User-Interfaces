// Window subclassing example - main program

#include <iostream>
#include <QApplication>
#include "window.hpp"

int main(int argc, char *argv[])
{
  if (argc == 1) {
    std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
    return 1;
  }

  QApplication app(argc, argv);

  QString filename(argv[1]);
  EditorWindow window(filename);
  window.show();

  return app.exec();
}

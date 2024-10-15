// Example of embedding a GIF animation in a label

#include <QtWidgets>
#include <iostream>

int main(int argc, char *argv[])
{
  // Make sure that a filename has been specified

  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
    return 1;
  }

  QApplication app(argc, argv);

  // Load animation from the given file

  QMovie* gif = new QMovie(argv[1]);
  gif->jumpToFrame(0);

  // Embed animation in a label and display GUI

  QLabel* label = new QLabel();
  label->setWindowTitle("GIF Player");
  label->setMovie(gif);
  label->show();

  // Start the animation

  gif->start();

  return app.exec();
}

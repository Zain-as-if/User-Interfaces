// Example of QPushButton creation & configuration

#include <QtWidgets>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  // Create and configure button

  QPushButton* button = new QPushButton("Edit");

  button->setFont(QFont("Helvetica", 32, QFont::Bold));
  button->setIcon(QIcon("../button.png"));
  button->setIconSize(QSize(48, 48));
  //button->setEnabled(false);

  // Connect button's 'clicked' signal to app's 'quit' slot

  QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));

  // Display button and start main loop

  button->setMinimumSize(220, 80);
  button->show();

  return app.exec();
}

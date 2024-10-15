// Test program for PostcodeInpu widget

#include "postcode.hpp"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  // Create components

  QFont font("Helvetica", 18);

  PostcodeInput* postcode = new PostcodeInput();
  postcode->setFont(font);

  QLabel* label = new QLabel("&Postcode:");
  label->setFont(font);
  label->setBuddy(postcode);

  // Arrange components horizontally

  QHBoxLayout* layout = new QHBoxLayout();
  layout->addWidget(label);
  layout->addWidget(postcode);

  // Create and display window

  QWidget* window = new QWidget();
  window->setWindowTitle("PostcodeInput Test");
  window->setLayout(layout);

  window->show();

  return app.exec();
}

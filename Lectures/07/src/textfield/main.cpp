// Example of using QLineEdit

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QLineEdit* textField = new QLineEdit();

  textField->setFont(QFont("Helvetica", 18));
  textField->setPlaceholderText("Enter your name");
  //textField->setReadOnly(true);

  textField->setMinimumWidth(300);
  textField->setMinimumHeight(50);
  textField->setWindowTitle("QLineEdit Example");
  textField->show();

  return app.exec();
}

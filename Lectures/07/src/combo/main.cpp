// Example of using QComboBox

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  // Create and populate combo box

  QStringList text;
  text << "Apple" << "Banana" << "Kiwi" << "Orange";

  QComboBox* combo = new QComboBox();
  combo->setFont(QFont("Helvetica", 18));
  combo->addItems(text);

  // Display combo box

  combo->setMinimumWidth(200);
  combo->show();

  return app.exec();
}

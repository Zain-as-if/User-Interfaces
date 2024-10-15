// QFormLayout example

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QFont font("Helvetica", 16);

  QLineEdit* name = new QLineEdit();
  name->setFont(font);

  QSpinBox* age = new QSpinBox();
  age->setRange(1, 100);
  age->setFont(font);

  QFormLayout* layout = new QFormLayout();
  layout->addRow("&Name:", name);
  layout->addRow("&Age:", age);
  layout->labelForField(name)->setFont(font);
  layout->labelForField(age)->setFont(font);

  QWidget* window = new QWidget();
  window->setWindowTitle("QFormLayout Example");

  window->setLayout(layout);
  window->setMinimumWidth(320);
  window->show();

  return app.exec();
}

// Example of using QCheckBox

#include <QtWidgets>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  // Create some checkboxes

  QCheckBox* apple = new QCheckBox("Apple");
  QCheckBox* banana = new QCheckBox("Banana");
  QCheckBox* kiwi = new QCheckBox("Kiwi");

  // Arrange them vertically

  QVBoxLayout* layout = new QVBoxLayout();
  layout->addWidget(apple);
  layout->addWidget(banana);
  layout->addWidget(kiwi);
  layout->addStretch(1);    // see what happens if you comment this out

  // Create an enclosing box with title (not essential)

  QGroupBox* window = new QGroupBox("Fruit");
  window->setCheckable(true);
  window->setLayout(layout);
  window->setMinimumWidth(240);
  window->setWindowTitle("QCheckBox Example");
  window->show();

  return app.exec();
}

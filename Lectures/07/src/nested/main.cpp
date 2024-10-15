// Nested Layout exercise rendered in code
// (Note: using QFormLayout would simplify this)

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  // Layout 1

  QLineEdit* name = new QLineEdit();
  QLabel* nameLabel = new QLabel("&Name");
  nameLabel->setBuddy(name);

  QHBoxLayout* layout1 = new QHBoxLayout();
  layout1->addWidget(nameLabel);
  layout1->addWidget(name);

  // Layout 2 (left side of UI)

  QCheckBox* matchCase = new QCheckBox("&Match case");
  QCheckBox* searchBackwards = new QCheckBox("Search &backwards");

  QVBoxLayout* layout2 = new QVBoxLayout();
  layout2->addLayout(layout1);
  layout2->addWidget(matchCase);
  layout2->addWidget(searchBackwards);

  // Layout 3 (right side of UI)

  QPushButton* searchButton = new QPushButton("&Search");
  QPushButton* closeButton = new QPushButton("&Close");

  QVBoxLayout* layout3 = new QVBoxLayout();
  layout3->addWidget(searchButton);
  layout3->addWidget(closeButton);

  // Layout 4 combines the two sides

  QHBoxLayout* layout4 = new QHBoxLayout();
  layout4->addLayout(layout2);
  layout4->addLayout(layout3);

  QWidget* window = new QWidget();
  window->setLayout(layout4);
  window->setWindowTitle("Nested Layout Example");
  window->show();

  return app.exec();
}

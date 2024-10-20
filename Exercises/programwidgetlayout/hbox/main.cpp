#include <QtWidgets>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget* window = new QWidget();
    window->setWindowTitle("QHBoxLayout Test");

    //QPushButton* button1 = new QPushButton("Button 1");
    //QPushButton* button2 = new QPushButton("Button 2");
    //QPushButton* button3 = new QPushButton("Button 3");

    QLabel* label = new QLabel("&Name:");
    QLineEdit* nameField = new QLineEdit();
    QPushButton* button = new QPushButton("Submit");

    label->setBuddy(nameField);

    QHBoxLayout* layout = new QHBoxLayout();
    layout->addStretch();
    layout->addWidget(label);
    layout->addWidget(nameField);
    layout->addWidget(button);
    layout->addStretch();

    window->setLayout(layout);

    window->show();

    return app.exec();
}

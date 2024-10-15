// Example of component customisation via subclassing

#pragma once

#include <QtWidgets>

class PostcodeInput: public QLineEdit
{
  public:
    PostcodeInput(QWidget* parent = nullptr);
};

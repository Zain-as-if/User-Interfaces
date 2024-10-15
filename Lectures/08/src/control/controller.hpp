#pragma once

#include <QWidget>

class QLCDNumber;  // <1>
class QSlider;

class Controller: public QWidget  // <2>
{
  public:
    Controller(QWidget* = nullptr);  // <3>

  private:
    QLCDNumber* number;  // <4>
    QSlider* slider;
    void createWidgets();  // <5>
    void arrangeWidgets();
};

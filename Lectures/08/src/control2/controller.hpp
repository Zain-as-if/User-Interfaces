#pragma once

#include <QWidget>

class QLCDNumber;
class QSlider;

class Controller: public QWidget
{
  Q_OBJECT  // <1>

  public:
    Controller(QWidget* = nullptr);

  private slots:  // <2>
    void setColourFor(int);  // <3>

  private:
    QLCDNumber* number;
    QSlider* slider;
    void createWidgets();
    void arrangeWidgets();
};

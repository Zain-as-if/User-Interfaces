#include "controller.hpp"
#include <QtWidgets>

Controller::Controller(QWidget* parent): QWidget(parent)
{
  createWidgets();
  arrangeWidgets();

  connect(slider, SIGNAL(valueChanged(int)), number, SLOT(display(int)));
  connect(slider, SIGNAL(valueChanged(int)), this, SLOT(setColourFor(int)));
}

void Controller::createWidgets()
{
  number = new QLCDNumber(3);
  number->setMinimumHeight(75);
  number->display(50);

  slider = new QSlider(Qt::Horizontal);
  slider->setRange(0, 100);
  slider->setTickPosition(QSlider::TicksBelow);
  slider->setTickInterval(10);
  slider->setValue(50);
}

void Controller::arrangeWidgets()
{
  QVBoxLayout* layout = new QVBoxLayout();

  layout->addWidget(number);
  layout->addWidget(slider);

  setLayout(layout);
}

void Controller::setColourFor(int value)
{
  if (value < 25) {
    number->setStyleSheet("color: blue");
  }
  else if (value > 75) {
    number->setStyleSheet("color: red");
  }
  else {
    number->setStyleSheet("color: black");
  }
}

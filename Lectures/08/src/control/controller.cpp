#include "controller.hpp"
#include <QSlider>
#include <QLCDNumber>
#include <QVBoxLayout>

Controller::Controller(QWidget* parent): QWidget(parent)
{
  createWidgets();
  arrangeWidgets();

  // connect(slider, SIGNAL(valueChanged(int)),
  //         number, SLOT(display(int)));
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

// Example of component customisation via subclassing

#include "postcode.hpp"

// Regular expression for UK postcodes (based on rules at Wikipedia)
static const QRegularExpression POSTCODE("^(GIR ?0AA|[A-PR-UWYZ]([0-9]{1,2}|([A-HK-Y][0-9]([0-9ABEHMNPRV-Y])?)|[0-9][A-HJKPS-UW]) ?[0-9][ABD-HJLNP-UW-Z]{2})$");

PostcodeInput::PostcodeInput(QWidget* parent): QLineEdit(parent)
{
  auto val = new QRegularExpressionValidator(POSTCODE, this);
  this->setValidator(val);
}

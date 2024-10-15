# `postcode` Example

One advantage of an object-oriented GUI framework is that you can create
new and more specialized widgets by subclassing the existing widgets
in the framework.

Start by looking at `postcode.hpp` and `postcode.cpp`. Together, these
files define a new custom widget named `PostcodeInput`, inheriting from
`QLineEdit`. This new widget does everything that a regular `QLineEdit` can
do but it adds the capability to validate its input as a UK postcode.

Validation is done by simply setting the validator of the widget to be
an instance of `QRegularExpressionValidator`. This validator allows you to
specify a pattern for valid input as a regular expression. The very
complex regexp used here comes from Wikipedia and is claimed to validate
UK postcodes successfully.

The program that uses the new widget is in `main.cpp`. Notice line 17,
which associates a descriptive label with the postcode entry widget.
Notice also how the two widgets are laid out horizontally by means of a
`QHBoxLayout` container on lines 21-23. This container is then added to a
`QWidget`, which acts as the window for the application.

Build this example in the usual way, then run it with

    ./postcode

Then try entering different postcodes as input. You should find that the
widget prevents entry of any character that would guarantee an invalid
final postcode.

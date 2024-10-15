# `pixmap` Example

This demonstrates how a `QLabel` widget can use a static image, in the
form of a `QPixmap` object, as its content.

A label's pixmap is specified by a property called `pixmap` -- which
means that you set the value of the property using a method named
`setPixmap()`. Once you realise that all Qt widgets adopt this convention,
you'll find using them much easier!

To compile:

    mkdir build && cd build
    cmake ..
    make

To run:

    ./pixmap ../world.png

You can substitute an image of your choosing as the program's command
line argument if you prefer.

Try compiling and running the demo as-is, then try again after
uncommenting the call to `setAlignment()`.  You should find that this
centres the pixmap within the label (and hence within the window).

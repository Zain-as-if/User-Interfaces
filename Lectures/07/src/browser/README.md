# `browser` Example

`QTextBrowser` is useful for displaying larger quantities of text.
The content can be supplied as basic HTML, and even hyperlinks are
supported (as in this example) -- but note that formatting capabilities
are limited; if you want proper support for HTML, CSS & JavaScript
you will need to use `QtWebKit`.

To build the demo:

    mkdir build && cd build
    cmake ..
    make

Before running the demo, copy the content that it uses into the `build`
directory:

    cp ../*.html .
    cp ../workd.png .

Then run the demo with

    ./browser

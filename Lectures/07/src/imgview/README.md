# `imgview` Example

This is a very simple image viewing application. The image file is
specified as the sole command line argument, e.g.

    ./imgview ../lemur.jpg

The loaded image is displayed by making it the pixmap associated with
a `QLabel` widget.

To accommodate large images, the `QLabel` is embedded within a
`QScrollArea` widget. This will add scrollbars if the image is larger
than the preset window dimensions.

# `control` Example

This demonstrates a composite widget that combines a slider with a
numeric display of the value on that slider. The `Controller` widget
inherits from `QWidget` and contains instances of `QSlider` and
`QLCDNumber`, arranged using `QVBoxLayout`.

Build this in the usual way and then run the application. You'll notice
that moving the slider has no effect on the display value. This is because
the two widgets haven't been wired together.

Edit `controller.cpp` and uncomment the lines in the constructor. The
uncommented code connects the `valueChanged` signal of the slider to the
`display` slot of the numeric display widget, ensuring that changes to the
value of the former are communicated to the latter.

Rebuild the application and run it again. This time, you should see the
numeric display being updated in response to slider movement.

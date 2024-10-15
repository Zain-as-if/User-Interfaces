# `control2` Example

This is very similar to the `control` example, except that it introduces
a custom slot to add a new response to changes in slider value.

This necessitates some changes to the header file defining the
`Controller` class; compare this version of `controller.hpp` with
`../control/controller.hpp` to see what is different.

The slot is implemented as the method `setColourFor()`, with a single
`int` as its sole parameter. The implementation changes the colour
of the displayed number, based on its value.

The constructor of `Controller` now connects the `valueChanged` signal
of the slider to *two* slots: the built-in `display` slot of the
`QLCDNumber` widget, to change the displayed number; and the custom
`setColourFor` slot of `Controller` itself, to change the colour.

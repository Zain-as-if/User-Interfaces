# `checkbox` Example

This demonstrates the creating & configuration of `QCheckBox` widgets.

Note the use of `QVBoxLayout` to organise the checkboxes vertically.
Run the demo as-is and try resizing the window vertically. Then comment out
the call to the `addStretch()` method on line 21, rebuild and rerun, and
try resizing again. You should see different behaviour this time.

Another thing to try is commenting out the call to `setCheckable()` on
line 26. This will have the effect of removing the checkbox that allows you
to enable or disable the entire group.

Note that `QGroupBox` isn't strictly needed here. You could replace it with
a generic `QWidget`, for example. The benefits of using `QGroupBox` are
that it frames the group and it allows the group to be enabled/disabled.

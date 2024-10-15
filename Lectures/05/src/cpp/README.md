# Lecture 5 C++ Example

This subdirectory contains another example of a C++ class.

Note that this example is provided for illustrative purposes and is unlikely
to be very useful in practice. In practical situations you would be far
better off using `vector` from the standard library!

`array.hpp`
: Definition of a class named `Array`, representing dynamically allocated
arrays of `float` values.

`array.cpp`
: Implementation file for the class defined in `array.hpp`. Note: the
constructors, destructor and assignment operator are instrumented with
print statements so that you can see when they are called. Obviously, you
would never do this in practice!

`arraytest.cpp`
: Test program using the `Array` class.

## Building With CMake

Move into `cpp` and run the following commands:

    mkdir build && cd build
    cmake ..
    make

This will create an executable named `arraytest`.

## Building Without CMake

Run the following in the `cpp` directory:

    g++ -o arraytest arraytest.cpp array.cpp

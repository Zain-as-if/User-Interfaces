# Lecture 3 Source Code

## Files

`circle.hpp`
: Header file providing the definition of a C++ class to represent circles.

`circle.cpp`
: Implementation file for the class defined in `circle.hpp`.

`circdemo.cpp`
: Simple program demonstrating use of the `Circle` class defined
in `circle.hpp`.

`Circle.java`
: Java equivalent of the C++ `Circle` class. It's instructive to compare
this code with that in `circle.hpp` & `circle.cpp`.

`shape.hpp`
: Definition of a superclass for different types of shape.

`circle2.hpp`
: New version of `Circle` class that inherits from `Shape`.

`circle2.cpp`
: Implementation file for the class defined in `circle2.hpp`.

`circdemo2.cpp`
: Equivalent program to `circdemo.cpp`, using the new inheritance-based
version of the `Circle` class.

## Compiling

All of the C++ programs can be built using CMake. Execute this command
once to set up the build process:

    mkdir build && cd build && cmake ..

Thereafter, you can build a program from within the `build` directory
using the `make` command, e.g.

    make circdemo

Using `make` on its own will build all targets.

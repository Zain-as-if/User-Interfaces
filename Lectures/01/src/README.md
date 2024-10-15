# Lecture 1 Source Code

## Files

`example.c`
: Simple C program demonstrating use of text strings and I/O using the
`printf()` and `scanf()` functions.

`example.cpp`
: C++ equivalent of `example.c`, showing the different approach used for
text representation and I/O.

`example2.cpp`
: Equivalent program to `example.cpp`, showing how a `using namespace`
statement allows us to omit the tedious `std::` prefix when using elements
of the standard library in our code.

`iodemo.cpp`
: Another example of I/O in C++, also demonstrating how we can check the
fail bit to see whether an input operation succeeded.

`iodemo2.cpp`
: Variation of `iodemo.cpp` showing how an input operation can be incorporated
into a test to see whether input succeeded.

`stringdemo.cpp`
: Demonstration of some of the things we can do with C++ strings, showing
that text handling is much easier in C++ than in C.

`vecdemo.cpp`
: Demonstration of some of the things we can do with C++ vectors.

## Compiling

Compile `example.c` with

    gcc -o example example.c

All of the C++ programs can be built using CMake. Execute this command
once to set up the build process:

    mkdir build && cd build && cmake ..

Thereafter, you can build a program from within the `build` directory
using the `make` command, e.g.

    make iodemo

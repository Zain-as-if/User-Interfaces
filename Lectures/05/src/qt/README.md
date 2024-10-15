# Lecture 5 Qt Example

This subdirectory contains a trivial "Hello World" program that uses
the Qt framework.

After following one of the build processes outlined below, you should be
able to run the program with `./hello` on Linux or macOS, or `hello`
at the Windows command prompt. On Windows, you should also be able to
double-click on the `hello.exe` file.

## Building With CMake

Moving into the `qt/hello` directory and run the following commands:
```
mkdir build && cd build
cmake ..
make
```

## Building With qmake

1. Move into `qt/hello`.

2. Run `qmake6 -project` (try `qmake` if `qmake6` doesn't work).

3. Edit the file `hello.pro` and add this line to it:

       QT += widgets

4. Run `qmake6` without any command line arguments. This should generate
   a makefile for the application.

5. Run `make` to build the application.

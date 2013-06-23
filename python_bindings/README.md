Python 2.x Bindings for Halide
------------------------------

By Connelly Barnes, 2012-2013.

This library allows you to write Halide code in Python. The library has currently only been tested on Mac OS,
against a Halide source build, and is experimental. Currently the library does not install into
the system package directory.

Installation
------------

### Prerequisites

Install SWIG 2.0.7+, and Python libraries Numpy, and Python Image Library (PIL).

On Mac:

    sudo easy_install pip
    brew install swig
    sudo pip install numpy
    sudo pip install pil

### Building

You can build Halide by using 'make' in the parent directory. Next, build the Python bindings:

    make                % Build
    make test           % Run unit tests
    sudo make install   % Install

If anything fails then use 'sudo make clean' to clean up and try again.

Usage
-----

Currently, there is no manual. The Python bindings are made by wrapping the C++ layer, so the syntax is thus quite similar.

Run the example applications in the apps/ subdirectory, and look at their code, to understand the library.




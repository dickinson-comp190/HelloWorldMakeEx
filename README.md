# HelloWorldMakeEx

Simple example that uses the automake tools to build a gtk hello world application.  

It is intended just as an example to:
* Introduce the `./configure`, `make`, `make install` incantation.
* Practice installing a dependency (gtk)

This example has been adapted from and incorporated code from:
* [Creating a GTK Project using GNU Autotools](https://wiki.gnome.org/Attic/Create%20a%20GTK%20Project%20using%20autotools) by by WilliamJonMcCann.
* [The magic behind configure, make, make install](https://thoughtbot.com/blog/the-magic-behind-configure-make-make-install) by George Brocklehurst.
* [Creating a C/C++ GUI with GTK+](https://www.codeguru.com/cplusplus/creating-a-c-c-gui-with-gtk/) by Manoj Debnath.

## Building from Source:

Given a distribution or a clone of this repository, the steps to build the binary from sourse are:
```
./configure # Generate Makefile from Makefile.in
make # Use Makefile to build the program
make install # Use Makefile to install the program
```

## Updating Makefile.in:

As a developer, the steps used to update repo if changes are made to `configure.ac` or `Makefile.am`:
```
aclocal # Set up an m4 environment
autoconf # Generate configure from configure.ac
automake --add-missing # Generate Makefile.in from Makefile.am
```

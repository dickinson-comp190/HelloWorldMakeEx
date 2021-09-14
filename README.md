# HelloWorldMakeEx

Simple hello world example for the automake tools.

This example has been adapted from [The magic behind configure, make, make install](https://thoughtbot.com/blog/the-magic-behind-configure-make-make-install) by George Brocklehurst, with additions for `gettext` from [A Quick Gettext Tutorial](https://www.labri.fr/perso/fleury/posts/programming/a-quick-gettext-tutorial.html) by Emmanuel Fleury.

## Creating a Distribution

As a developer, the steps used to create a distribution are:
```
aclocal # Set up an m4 environment
autoconf # Generate configure from configure.ac
automake --add-missing # Generate Makefile.in from Makefile.am
./configure # Generate Makefile from Makefile.in
make distcheck # Use Makefile to build and test a tarball to distribute
```

## Building from Source:

Given a distribution, the steps to build the binary from sourse are:
To build a binary from the distribution:
```
./configure # Generate Makefile from Makefile.in
make # Use Makefile to build the program
make install # Use Makefile to install the program
```


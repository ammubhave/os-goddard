os-goddard
==========

Operating System Goddard

OS Goddard is an experimental operating system developed from scratch. It is pure 64-bit operating system and is heavily inspired by JamesM's kernel development tutorials (http://www.jamesmolloy.co.uk/tutorial_html/).

The code is divided into three parts: drivers, init and lib. The lib code is planned to be replaced by a ported C++ library.


Building the Cross-compiler
===========================

```sh
export PREFIX="/usr/local/cross"
export TARGET="x86_64-goddard"
export PATH="$PREFIX/bin:$PATH"
```

Binutls
-------

```sh
cd src/build-binutils
../binutils-2.24/configure --target=$TARGET --prefix="$PREFIX" --disable-nls
make
make install
```

GCC
---

```sh
cd src/build-gcc
../gcc-4.8.2/configure --target="$TARGET" --prefix="$PREFIX" --disable-nls --enable-languages=c,c++ --without-headers
make all-gcc
make all-target-libgcc
make install-gcc
make install-target-libgcc
```
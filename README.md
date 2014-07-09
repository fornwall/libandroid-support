libandroid-support
==================
This is an Autotools-configured version of the android support library found
in Android NDK at $NDK/sources/android/support/. See the original
README below for what it provides.

Changes made:

- [setlocale()](src/locale/setlocale.c): Return "en_US.UTF-8" instead of "C" as fixed locale.  Return fixed locale instead of setting errno and returning NULL when the locale argument is NULL. Accept locales containing "UTF-8" and "UTF8".
- [MB_LEN_MAX](include/machine/limits.h) and [MB_CUR_MAX](include/stdlib.h) has been defined to 4 instead of 1.
- Add [libintl.h](include/libintl.h) to provide gettext headers.

The above changes may be viewed by diffing this library with $NDK/sources/android/support/.

The primary purpose of this library is to compile general unix/linux software. When installed along the lines of

- ${SRC}/configure --prefix=arm-linux-androideabi --prefix=${PREFIX}
- make install

a C program may be compiled to use support library using something like:

- arm-linux-androideabi-gcc -isystem ${PREFIX}/include/ myprog.c -L${PREFIX}/lib -landroid-support -o myprog

Original README
==================
This is a small library that extends the Android C library (Bionic),
by adding:

- better wchar_t support.
- long double functions (simple wrappers really, since 'long double' is
  equal to 'double' on Android).
- multibyte support (using UTF-8 as the only supported multibyte encoding).
- locale-specific variants of C library functions.

Many things are still incomplete.

The sources under the following directories come from the Musl C library:

- src/musl-ctype
- src/musl-multibyte

Most of them do not have a copyright disclaimer, this is intentional,
and how the sources appear in the Musl source tree. They are either in
the public domain, or covered by the following classic
MIT-style license:

>  Copyright © 2005-2012 Rich Felker
>
>  Permission is hereby granted, free of charge, to any person obtaining
>  a copy of this software and associated documentation files (the
>  "Software"), to deal in the Software without restriction, including
>  without limitation the rights to use, copy, modify, merge, publish,
>  distribute, sublicense, and/or sell copies of the Software, and to
>  permit persons to whom the Software is furnished to do so, subject to
>  the following conditions:
>
>  The above copyright notice and this permission notice shall be
>  included in all copies or substantial portions of the Software.
>
>  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
>  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
>  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
>  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
>  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
>  TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
>  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

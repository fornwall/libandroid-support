libandroid-support
==================
This is an Autotools-configured version of the android support library found in
$NDK/sources/android/support/README.

$NDK/sources/android/support/README
==================

Autotools-using android support library for partial wchar _ t, multibyte and locale support
This is a small library that extends the Android C library (Bionic),
by adding:

- better wchar _ t support.

- long double functions (simple wrappers really, since 'long double' is
  equal to 'double' on Android).

- multibyte support (using UTF-8 as the only supported multibyte encoding).

- locale-specific variants of C library functions.

Many things are still incomplete.

The sources under the following directories come from the Musl C library:

  src/musl-ctype
  src/musl-multibyte

Most of them do not have a copyright disclaimer, this is intentional,
and how the sources appear in the Musl source tree. They are either in
the public domain, or covered by the following classic
MIT-style license:

  Copyright © 2005-2012 Rich Felker

  Permission is hereby granted, free of charge, to any person obtaining
  a copy of this software and associated documentation files (the
  "Software"), to deal in the Software without restriction, including
  without limitation the rights to use, copy, modify, merge, publish,
  distribute, sublicense, and/or sell copies of the Software, and to
  permit persons to whom the Software is furnished to do so, subject to
  the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
  TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


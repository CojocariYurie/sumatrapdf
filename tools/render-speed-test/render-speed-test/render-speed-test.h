#pragma once

#include "resource.h"

// this is new C++ raw string. It does seem to mess up line numbers in compiler warnings,
// which is why it's not in the .cpp file
#define SAMPLE_TEXT "This program tests various ways of measuring/drawing text.\n" \
    "\n" \
    "The GDI+ method we currently use in ebook mode in Sumatra seems slow, which makes" \
    "breaking up into pages quite slow." \
    "\n" \
    "According to http://theartofdev.wordpress.com/2013/08/12/the-wonders-of-text-rendering-and-gdi/" \
    "GDI can be substantially faster." \
    "\n" \
    "Another option available under Vista (and later) is to use Direct Draw 2D." \
    "\n" \
    "This program uses latest C++ features available in Visual Studio 2013, because I'm curious" \
    "if they provide substantial benefits." \
    "\n" \
    "As a result, this code might not compile under earlier version of Visual Studio (I'm using" \
    "Visual Studio 2013 Update 1 to be exact)." \
    "\n" \
    "This program is also a simple text viewer, because it can only display text. For simplicity" \
    "it doesn't handle any markup."

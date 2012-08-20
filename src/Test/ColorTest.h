#ifndef Magnum_Test_ColorTest_h
#define Magnum_Test_ColorTest_h
/*
    Copyright © 2010, 2011, 2012 Vladimír Vondruš <mosra@centrum.cz>

    This file is part of Magnum.

    Magnum is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License version 3
    only, as published by the Free Software Foundation.

    Magnum is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License version 3 for more details.
*/

#include <TestSuite/Tester.h>

namespace Magnum { namespace Test {

class ColorTest: public Corrade::TestSuite::Tester<ColorTest> {
    public:
        ColorTest();

        void fromDenormalized();
        void fromNormalized();

        void fromHue();
        void fromSaturation();
        void fromValue();

        void hue();
        void saturation();
        void value();

        void hsv();
        void hsvOverflow();
        void hsvAlpha();

        void debug();
        void configuration();
};

}}

#endif

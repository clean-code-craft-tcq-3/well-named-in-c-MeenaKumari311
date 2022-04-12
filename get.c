#includee "get.h"
#include "common.h"
ColorPair GetColorFromPairNumber(intpairNumber) {
    ColorPair colorPair;
    intzeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor= 
        (enumMajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor=
        (enumMinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    returncolorPair;
}
int GetPairNumberFromColor(constColorPair* colorPair) {
    returncolorPair->majorColor* numberOfMinorColors +
            colorPair->minorColor+ 1;
}

void ColorPairToString(constColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s%s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

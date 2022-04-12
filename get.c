#include "get.h"
#include "common.h"
ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor= 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor=
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    returncolorPair;
}
int GetPairNumberFromColor(constColorPair* colorPair) {
    return colorPair->majorColor* numberOfMinorColors +
            colorPair->minorColor+ 1;
}

void ColorPairToString(constColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s%s",
        Major ColorNames[colorPair->majorColor],
        Minor ColorNames[colorPair->minorColor]);
}

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
#endif

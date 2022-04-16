#ifndef __MAIN_H_
#define __MAIN_H_
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
static char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet"};
static int numberOfMajorColors =    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
static char* MinorColorNames[] = {    "Blue", "Orange", "Green", "Brown", "Slate"};
static int numberOfMinorColors =    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
static int MAX_COLORPAIR_NAME_CHARS = 16;
typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;


void ColorPairToString(const ColorPair* colorPair, char* buffer);
#endif

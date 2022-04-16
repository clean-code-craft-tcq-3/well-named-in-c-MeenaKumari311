#ifndef __MAIN_H_
#define __MAIN_H_
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;


void ColorPairToString(const ColorPair* colorPair, char* buffer);
#endif

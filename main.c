#include <stdio.h>
#include "main.h"

int main() 
{
    printf("\nTest1: Input Pair No: 4, Expected ColorPair: (WHITE,BROWN)\t");
    testNumberToPair(4, WHITE, BROWN);
    printf("\nTest2: Input Pair No: 5, Expected ColorPair: (WHITE,SLATE)\t");
    testNumberToPair(5, WHITE, SLATE);
    printf("\nTest3: Input  ColorPair: (BLACK,ORANGE), Expected Pair No: 12\t");
    testPairToNumber(BLACK, ORANGE, 12);
    printf("\nTest4: Input  ColorPair: (VIOLET,SLATE), Expected Pair No: 25\t");
    testPairToNumber(VIOLET, SLATE, 25);
    printf("\nReference Wiring manual:\n");
    PrintWiringManual();
    return 0;
}

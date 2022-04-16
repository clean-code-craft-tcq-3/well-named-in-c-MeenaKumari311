#include <stdio.h>
#include "main.h"

int main() 
{
    printf("\nTest1");
    testNumberToPair(4, WHITE, BROWN);
    printf("\nTest2");
    testNumberToPair(5, WHITE, SLATE);
    printf("\nTest3");
    testPairToNumber(BLACK, ORANGE, 12);
    printf("\nTest4");
    testPairToNumber(VIOLET, SLATE, 25);
    printf("\nReference Wiring manual:\n");
    PrintWiringManual();
    return 0;
}

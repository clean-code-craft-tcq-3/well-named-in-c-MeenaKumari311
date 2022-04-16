#include "main.h"
#include <stdio.h>

void PrintWiringManual(void)
{
  int pairNumber;
  for(pairNumber=1;pairNumber<26;pairNumber++)
  {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    printf("\n PairNo : %d \t", pairNumber);
    printf("Color Names: %s\t", MajorColorNames[colorPair.majorColor]);
    printf("%s", MinorColorNames[colorPair.minorColor]);
  }
}

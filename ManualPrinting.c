#include "main.h"
#include <stdio.h>

void PrintWiringManual(void)
{
  int pairNumber;
  for(pairNumber=0;pairNumber<25;pairNumber++)
  {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    printf("\n PairNo : %d \t", pairNumber+1);
    printf("%s", MajorColorNames[colorPair.majorColor]);
    printf("%s", MinorColorNames[colorPair.minorColor]);
  }
}

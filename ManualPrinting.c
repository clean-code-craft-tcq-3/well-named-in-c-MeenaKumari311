#include "main.h"
#include <stdio.h>

void PrintWiringManual(void)
{
  int PairNumber;
  for(PairNumber=1;PairNumber<=25;PairNumber++)
  {
    ColorPair colorPair = GetColorFromPairNumber(PairNumber);
    printf("\nPairNumber: %d\t", PairNumber);
    printf("MajorColor: %s\t", MajorColorNames[colorPair.majorColor]);
    printf("MinorColor: %s", MinorColorNames[colorPair.minorColor]);
  }
}

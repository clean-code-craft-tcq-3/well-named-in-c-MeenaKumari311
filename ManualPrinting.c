#include "main.h"
#include <stdio.h>

void PrintWiringManual(void)
{
  int PairNumber;
  for(PairNumber=1;PairNumber<=25;PairNumber++)
  {
    ColorPair colorPair = GetColorFromPairNumber(PairNumber);
    printf("\n PairNumber : %d \t", PairNumber);
    printf("ColorNames: %s\t %s ", MajorColorNames[colorPair.majorColor],MinorColorNames[colorPair.minorColor]);
  }
}

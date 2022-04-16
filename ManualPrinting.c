#include "main.h"
#include <stdio.h>

void PrintWiringManual(void)
{
  int pairNumber;
  for(pairNumber=0;pairNumber<25;pairNumber++)
  {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    printf("PairNo : %s", pairNumber);
    printf("ColorPair : %s\n", colorPair);
  }
}

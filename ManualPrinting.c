#include "main.h"
#include <stdio.h>

void PrintWiringManual(void)
{
  int PairNo;
  for(PairNo=0;PairNo<25;PairNo++)
  {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    printf("PairNo : %s", PairNo);
    printf("ColorPair : %s\n", colorPair);
  }
}

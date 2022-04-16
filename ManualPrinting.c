#include "main.h"
#include <stdio.h>

void PrintWiringManual(void)
{
  int pairNumber;
  for(pairNumber=0;pairNumber<25;pairNumber++)
  {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    //char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    //ColorPairToString(&colorPair, colorPairNames);
    //printf("Got pair %s\n", colorPairNames);
    printf("PairNo : %d", pairNumber);
    printf("%s", MajorColorNames[colorPair.majorColor]);
  }
}

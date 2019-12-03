#include <stdio.h>
#include <stdlib.h>
#include "mean_variance.h"

void main()
{
  int *y;
  float *r;

  r=mean_variance(y,100);
  printf("mean=%f\n",r[0]);printf("variance=%f\n",r[1]);
  
}

#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_statistics.h>

int main()                    
{ 
  double *y;
  double mean, variance;

  y=malloc(100*sizeof(double));
  
  for (int j=0;j<100;j++)                   /* creates an array of 1^2, 2^2, .......... */
    {y[j]=(j+1)*(j+1);};

  mean=gsl_stats_mean(y,1,100);
  variance=gsl_stats_variance(y,1,100);

  printf("mean=%f\t variance=%f.\n",mean,variance);
 
  return 0;
}

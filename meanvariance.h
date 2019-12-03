#include <stdio.h>
#include <stdlib.h>

float  *mean_variance(int *p, int size)    
{   
  int j;
  float mean, variance;
 
  int sum=0;  
  for (j=0;j<size;j++)			    
    {sum += p[j];};
  
  mean=sum/(float)size;			  
  int squaresum=0;  
  for (j=0;j<size;j++)			   
    {squaresum += (p[j]-mean)*(p[j]-mean);};

  variance=squaresum/(float)size;	                  
  
  
  float *w;  				    
  w=malloc(2*sizeof(float));
  w[0]=mean;
  w[1]=variance;
  
  return(w);
}

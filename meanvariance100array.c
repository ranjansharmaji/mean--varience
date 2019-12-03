#include <stdio.h>
#include <stdlib.h>

float *mean_variance(int *p, int size);     /*take an array,return an array of mean and variance.*/

int main()                    
{ 
  int *r;
  r=malloc(100*sizeof(int));
  
  for (int j=0;j<100;j++)                   /* array of 1^2, 2^2, .......... */
    {r[j]=(j+1)*(j+1);};

  float *q;  				    /* mean and  variance of any array.*/
  q=mean_variance(y,100);

  printf("mean=%f.\n",q[0]);		    /* 0th element of q array is mean of given array.*/
  
  printf("variance=%f.\n",q[1]);            /* 1st element of q array is variance of given array.*/
  
  return 0;
  
  free(r);
  free(q);
}


float  *mean_variance(int *p, int size)    
  int j;
  float mean, variance;
 
  int sum=0;  
  for (j=0;j<size;j++)			   
    {sum += p[j];};
  
  mean=sum/(float)size;			 /

  int squaresum=0;  
  for (j=0;j<size;j++)			   
    {squaresum += (p[j]-mean)*(p[j]-mean);};

  variance=squaresum/(float)size;	                  
  
  float *w;  				    /* w is output array containing mean and variance.*/
  w=malloc(2*sizeof(float));
  w[0]=mean;
  w[1]=variance;
  
  return(w);
  
  free(w);
}


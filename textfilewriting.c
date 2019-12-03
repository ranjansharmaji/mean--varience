#include <stdio.h>
#include <stdlib.h>

float *mean_variance(int *p, int size);    

int main()                    
{ 
  int *y;
  y=malloc(100*sizeof(int));
  
  for (int j=0;j<100;j++)                  
    {y[j]=(j+1)*(j+1);};

  float *q;  				  
  q=mean_variance(y,100);
  
  FILE *fp;
  fp=fopen("result.txt","w");
  fprintf(fp,"mean = %f\t variance = %f.",q[0],q[1]);
  
  free(y);
  free(q);
 
  return 0;
}


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
  
  free(w);
}


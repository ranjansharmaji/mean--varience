#include <stdio.h>
#include <stdlib.h>

int *main()                    
{ 
  int *y;
  
  y=malloc(100*sizeof(int));
  
  for (int j=0;j<100;j++) {y[j]=(j+1)*(j+1);};  
  return (y);

}

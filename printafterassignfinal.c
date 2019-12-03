#include <stdio.h>
#include <stdlib.h>

int main()                    
{ 
  int *r;
  r=calloc(100,sizeof(int));
  
  for (int j=0;j<100;j++)                 
    {	
	r[j]=(j+1)*(j+1);
	printf("%d\t",r[j]);	
     };
 
  return 0;
  free(r);
}

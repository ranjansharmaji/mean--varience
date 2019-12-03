#include <stdio.h>
#include <stdlib.h>

int main()                    
{ 
  int *r;
  r=malloc(100*sizeof(int));
  
  for (int j=0;j<100;j++)                  
    {	
	printf("%d\t",r[j]);
	r[j]=(j+1)*(j+1);
     };
 
  return 0;
}

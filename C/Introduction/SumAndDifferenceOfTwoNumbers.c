#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int m,n;
    float f1,f2;
    
    scanf("%d%d",&m,&n);
    scanf("%f%f",&f1,&f2);
    
    printf("%d %d\n",m+n,m-n);
    printf("%.1f %.1f",f1+f2,f1-f2);
    
    return 0;
}

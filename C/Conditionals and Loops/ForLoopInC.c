#include <stdio.h>

int main() 
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(i=a;i<=b;i++){
        if(9-i==8)
            printf("one\n");
        else if(9-i==7)
            printf("two\n");
        else if(9-i==6)
            printf("three\n");
        else if(9-i==5)
            printf("four\n");
        else if(9-i==4)
            printf("five\n");
        else if(9-i==3)
            printf("six\n");
        else if(9-i==2)
            printf("seven\n");
        else if(9-i==1)
            printf("eight\n");
        else if(9-i==0)
            printf("nine\n");
        else if(i%2==0)
            printf("even\n");
        else 
            printf("odd\n");
    }
    return 0;
}

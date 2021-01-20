#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i, j, a, b, c, andmax=0, ormax=0, xormax=0;
  for(i=1;i<n;i++){
      for(j=i+1;j<=n;j++){
          a = i & j;
          b = i | j;
          c = i ^ j;
          
        if(andmax<a && a<k)
            andmax = a;
        if(ormax<b && b<k)
            ormax = b;
        if(xormax<c && c<k)
            xormax = c; 
        
      }
  } printf("%d\n%d\n%d",andmax,ormax,xormax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

#include <stdio.h>
#include<math.h>
 
int main() {
 
    unsigned long long A,B;
    scanf("%llu %llu" ,&A,&B);
    if (1 <= A && A <= B && B <=1000000000){
    unsigned long long sum = (B - A +1)*(A + B)/2;
    printf("%llu\n" ,sum);
    }
  
  
    
    return 0;
}

#include <stdio.h>

 
int main() {
    
    int N;
    scanf("%d" ,&N);
    unsigned long long fib[47];
    fib[0] = 0;
    fib[1] = 1;
    
    
    for(int i=2; i<46 ;i++){
        fib[i] =fib[i-1] +fib[i-2];
    }
    
    for(int i =0 ;i<N;i++){
        printf("%llu" ,fib[i]);
        
        if(i<N-1)
        printf(" ");
    }
    printf("\n");
 
   
    return 0;
}
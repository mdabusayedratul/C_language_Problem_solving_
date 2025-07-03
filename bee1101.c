#include <stdio.h>
 
int main() {
 int M,N;
 scanf("%d %d" ,&N,&M);


while (N >0 && M >0)
 {
   

    int start = (M<N)? M : N;
    int end = (M<N) ? N : M;
    int sum = 0;
    for(int i = start; i<= end;i++){
        printf("%d ",i);
        sum +=i;
    }
    printf("Sum=%d\n" ,sum);
    scanf("%d %d" ,&N,&M);
   
 }
 
    return 0;
}
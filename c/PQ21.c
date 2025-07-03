#include<stdio.h>
// this code calculate factorial of n number 
int main () {
    int n,i,sum;
    sum=1;
printf("enter a number :");
scanf("%d", &n);
for(i=1; i<=n; i++){ 
    sum = sum*i;  
}

  printf("%d\n", sum);
    return 0;
}
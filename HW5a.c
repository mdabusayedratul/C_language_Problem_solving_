#include<stdio.h>

int sumOFd(int a);

int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    sumOFd(a);

    return 0;
}
int sumOFd(int a){
    int sum=0;
    a = a < 0 ? -a : a ;
    while (a > 0 ) {
     sum += a%10 ;
        a /= 10 ;
    }
     
        printf("sum of digit is :%d\n" ,sum);

return sum ;
}
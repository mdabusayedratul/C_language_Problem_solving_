#include<stdio.h>

void dowork(int a ,int b ,int *sum ,int *product ,int *average);

int main (){
    int sum ,product ,average;
    int  a = 4, b = 6; 
    dowork(a ,b ,&sum ,&product , &average);
    printf("sum: %d\npro: %d\nave: %d\n" ,sum ,product ,average);
    
    return 0;
}
void dowork(int a ,int b ,int *sum ,int *product ,int *average){ 
    *sum = a + b ;
    *product = a * b ;
    *average = (a + b)/2 ;
    
    return ;
}
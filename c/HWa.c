#include<stdio.h>
float sum(int a ,int b );

int main(){
    int a =1 ,b=2 ;

    sum(a,b);
    
    return 0;
}

float sum(int a ,int b){
    int sum = a + b ;
    printf ("sum is : %d \n" ,sum);
    return sum ;
}

#include<stdio.h>
//sum of odd value
int main (){

    int a ,b;
    scanf("%d %d" ,&a ,&b);
    int fristValue = a>b ? b+1 : a+1;
    int lastValue = a>b ? a : b;
    int sum = 0;

    for (int i = fristValue ;i < lastValue ; i++ ){
        if(i%2 != 0){
            sum = sum + i ;
        }

    }
    printf("%d\n" ,sum);
    return 0;
}
#include<stdio.h>
int main(){
    int num ;
    printf("Enter a number \n");
    scanf("%d" ,& num);

    if(num>9 && num<100){
        printf("True");

    }
    else{
        printf("False");
    }
    return 0;

}
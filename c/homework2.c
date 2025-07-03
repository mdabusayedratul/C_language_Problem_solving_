#include<stdio.h>
//average of three number 

int main (){
    int a,b,c;
    printf("enter a:");
    scanf("%d", &a);

    printf("enter b:");
    scanf("%d", &b);

    printf("enter c:");
    scanf("%d", &c);

    int ave = (a+b+c)/3;
    printf("average is: %d", ave);
    
    return 0;

}

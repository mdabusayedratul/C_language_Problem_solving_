#include<stdio.h>

//perimeter for a rectangle
int main() {

    int a,b; 

    printf("Length of the ractangle is a. Enter the value of a : ");
    scanf("%d" , &a);

    printf("Width of the rectangle is b. Enter the value of b:");
    scanf("%d",&b);

    printf("Perimeter of the rectangle is :%d \n " , 2*a+2*b);


    return 0;
}

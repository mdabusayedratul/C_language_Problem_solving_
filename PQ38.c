#include<stdio.h>
//swap two number a&b

void swap(int a , int b);
void _swap(int *a , int *b);
int main (){

    int x ,y;
    x = 3;
    y = 4;

    _swap(&x , &y);
    printf("x = %d & y = %d\n", x, y);

     return 0;
}

// call by reference
void _swap(int *a , int *b){
    int c = *a;
    *a = *b;
    *b = c;
    return ;

}
//call by value
void swap(int a , int b){

    int c = a;
    a = b;
    b = c;
    printf("a is equal: %d\nb is equal: %d\n" ,a ,b);

    return;

}
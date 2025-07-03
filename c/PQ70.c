#include<stdio.h>
#include<stdlib.h>
void swap (int a ,int b);
void _swap(int *a ,int *b);
void print (int a , int b);

int main(){
    int a = 2, b = 3;

    _swap (&a ,&b);
    print (a ,b);

    return 0;
}
//call by value 
void swap (int a ,int b){
    int c = a;
    a = b;
    b = c;
    printf("a is equal: %d\nb is equal: %d\n" ,a ,b);
    return;
}
//call by reference
void _swap(int *a ,int *b){
    int c = *a;
    *a = *b;        
    *b = c;
    return;
}

//works when the funtion call by reference
void print (int a , int b){
    printf("A is = %d\n" ,a);
    printf("B is = %d\n" ,b);
    return;
}
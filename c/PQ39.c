#include<stdio.h>

void address(int a);

int main (){
    int a = 4;
    printf("%p\n" ,&a);
    address(a);

}

void address(int a){
    printf("%p\n" ,&a);

    return ;
}
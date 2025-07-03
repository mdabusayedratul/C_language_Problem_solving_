#include<stdio.h>

void printHW(int count);
int main (){
printHW(9);
    return 0;
}

void printHW(int count){
    if (count == 0){
        return ;
    }
    printf("hello\n");
    printHW(count-1);
}
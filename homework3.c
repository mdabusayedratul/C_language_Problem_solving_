#include<stdio.h>

int main(){
    char ch;
    printf("Enter a charectar : ");
    scanf("%c" ,&ch);
    if (ch>='0' && ch<='9'){
        printf ("This is a digit");

    }
    else{
        printf("This not a digit  ");
        }
    return 0;
}
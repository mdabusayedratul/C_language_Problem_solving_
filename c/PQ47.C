#include<stdio.h>

void name(char arr[] );
int main(){
    char firstname [] = "sayed";
    char lastname [] = "fa";
    
    name(firstname );
    printf("+++");
    name(lastname);printf("\n");
    return 0;
}
void name (char arr []){
    for(int i=0;arr[i]!='\0' ;i++){
        printf("%c" ,arr[i]);
         
    }
    
    return ;
}
#include <stdio.h>
// this code print okey when user input a even number 
int main (){
    int a,i;
    
    do {
        printf("enter a number : ");
        scanf("%d" ,&a);
        if (a%2 != 0){
            break;
        }

        
    } while(1);
printf("okey");
return 0;


}
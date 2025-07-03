#include <stdio.h>

int main() {
    // this code prints table of a number that input by user 
    int i ,a ;
    printf ("Enter a number to print your table :");
    scanf("%d",&a );
    
    for(i=1; i<=10 ; i++){
        printf("%d \n" , i*a);
    }
    
   

    
    return 0;
};
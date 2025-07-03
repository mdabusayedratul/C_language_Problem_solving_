#include <stdio.h>
#include<limits.h>
 
int main() {
 
    int num[100];
    for(int i = 0;i<100;i++){
        scanf("%d" ,&num[i]);
    }

    int largest = INT_MIN;
    int position = 0;

    for(int i = 0;i<100;i++){
        if(num[i]> largest){
        largest = num[i] ;
        position = i + 1 ;
       }
    }

    printf("%d\n" ,largest);
    printf("%d" ,position);
    return 0;
}
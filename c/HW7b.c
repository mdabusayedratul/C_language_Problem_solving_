#include <stdio.h>
 
int main() {
 
   int n ,i ,largest;
   scanf("%d" ,&n);
   int arr [n];
   for(i = 0; i<n ;i++){
    scanf("%d" ,&arr[i]);
   }

   arr[0] = largest;

   for(i = 0 ; i<n ;i++){
    if(arr[i] > largest){
        largest = arr[i];
    }
   }
   printf("largest = %d\n" ,largest);
 
    return 0;
}
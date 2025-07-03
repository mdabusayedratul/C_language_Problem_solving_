#include <stdio.h>
#include<stdbool.h>
 
int main() {
 
int N;
scanf("%d" ,&N);
int X;


for(int i = 0;i<N;i++){
    scanf("%d" ,&X);
    bool is_prime = true;
    if(X<=1){
        is_prime = false;
    }
     else{
       for(int j = 2; j<X ; j++){
        if(X<=1 || X%j == 0){
        is_prime = false;
        break;
       }
     
      }
   }   
    (is_prime == true)? printf("%d eh primo\n",X) : printf("%d nao eh primo\n",X);
}



    
return 0;
}
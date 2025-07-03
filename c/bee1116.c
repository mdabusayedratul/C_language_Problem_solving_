#include <stdio.h>
 
int main() {

    int N;
    scanf("%d" ,&N);

   int X,Y;
   for(int i = 0;i<N ;i++){
   scanf("%d %d" ,&X ,&Y);
   

   if(Y == 0 ){
   printf("divisao impossivel\n");
   }
   else{
   float result =(float) X/Y;
   printf("%.1f\n" ,result);}

   }
   
 
    return 0;
}
#include<stdio.h>
//this code print 1 to n number  & skip  even number
int main (){
    int n, i;

printf ("enter a number :");
scanf("%d" , &n);
i=1;
for(i=1; i<=n; i++){
    if(i%2 == 0){
        continue;
    }
   printf("%d \n" , i);
}

return 0;
}
#include<stdio.h>

void sumOFN(int n);

int main (){
    int  n;
    printf("Enter number : ");
    scanf("%d",&n);

    sumOFN(n);

    return 0;
}
void sumOFN(int n){
    int sum, a;
    sum = 0;
    
     for(a=0; a<=n; a++){
        sum = sum + a;
        
     }
     printf("sum is :%d\n",sum);

     return ;
}
#include<stdio.h>

int main(){

    int X ,Y;
    scanf("%d %d" ,&X,&Y);

    int N = (Y%X == 0) ? Y/X : (Y/X)+1;
    int A=1;
    
    for(int i = 0;i<N;i++){
        if(A>Y)
        break;
       
        for(int j=0;j<X;j++){
            
            printf("%d",A);
            A++;
            if(j<X-1 && A<=Y)
            printf(" ");
        }

    printf("\n");
    }
    return 0;
}
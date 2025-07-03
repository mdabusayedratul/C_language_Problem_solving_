#include <stdio.h>
 
int main() {
 
    int X,Y;
    scanf("%d %d" ,&X,&Y);
    
    int start = (Y<X) ? Y+1 : X+1;
    int end =(X<Y) ? Y : X;
    
    
    for(int i =start;i<end;i++){
        if(i%5 == 2 || i%5 == 3){
            printf("%d\n" ,i);
        }
    }
 
    return 0;
}
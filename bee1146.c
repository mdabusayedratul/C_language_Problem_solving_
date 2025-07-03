#include <stdio.h>
 
int main() {
 
int X;
scanf("%d",&X);


while (X!=0)
{
    
    for(int i = 1; i<=X;i++){
        if(i<X)
        printf("%d ",i);
        else{
            printf("%d\n",i);
        }
    }

   scanf("%d",&X);

}
 
    return 0;
}
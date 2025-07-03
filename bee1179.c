#include <stdio.h>
 
int main() {
 
int par[5];
int impar[5];
int p = 0;
int im = 0;


for(int i = 0; i<15; i++){
    int n;
    scanf("%d" ,&n);
    
    if(n%2 != 0 ){
        impar[im] = n;
        im++;
      }
    else{
    par[p] = n;
    p++;
    }
    }
    for(int i = 0 ;par[i]<p; i++){
        printf("par %d\n" ,par[i]);

    }
    for(int i = 0 ;impar[i]<im; i++){
        printf("impar %d\n" ,impar[i]);

    }
    
    
    return 0;
}
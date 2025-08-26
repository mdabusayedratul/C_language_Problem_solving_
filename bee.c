#include<stdio.h>

int main(){

    int par[5],impar[5];
    int pa =0, im =0;

    for(int i =0 ; i<15 ;i++){
        int n;
        scanf("%d" ,&n);
        
        if(n%2 != 0){
           impar[i] = n;
            im++;
            if(im == 5){
                for(int j = 0 ;j<im ;j++){
                    printf("impar[%d] = %d" ,impar[j]);
                    im = 0;
                }
            }
        }
        else{
            par[i] = n;
            pa++;
            if(pa == 5){
                for(int j = 0 ;j<pa ;j++){
                    printf("par[%d] = %d" ,par[j]);
                    pa = 0;
                }
           }
        
        }

   
    }
    for(int i =0 ;i<par;i++){
      printf("par[%d] = %d" ,par[i]);
    }
    for(int i =0 ;i<im;i++){
      printf("impar[%d] = %d" ,impar[i]);
    }

    return 0;
}
    

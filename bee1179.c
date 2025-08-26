#include<stdio.h>

int main(){

    int par[5],impar[5];
    int pa =0, im =0;

    for(int i =0 ; i<15 ;i++){
        int n;
        scanf("%d" ,&n);
        
        if(n%2 != 0){
           impar[im] = n;
            im++;
            if(im == 5){
                for(int j = 0 ;j<im ;j++){
                    printf("impar[%d] = %d\n" ,j,impar[j]);
                 }
                    im = 0;

            }
        }
        else{
            par[pa] = n;
            pa++;
            if(pa == 5){
                for(int j = 0 ;j<pa ;j++){
                    printf("par[%d] = %d\n" ,j,par[j]);
                   
                }
                 pa = 0;
           }
        
        }

   
    }
     for(int i =0 ;i<im;i++){
      printf("impar[%d] = %d\n" ,i,impar[i]);
    }
    for(int i = 0 ;i<pa;i++){
      printf("par[%d] = %d\n" ,i,par[i]);
    }
   

    return 0;
}
    

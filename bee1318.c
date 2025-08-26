#include <stdio.h>
 
int main() {
 
     int M ,N ;
     scanf("%d %d" ,&M ,&N);
     int ticket [N];
  
       while (M != 0 && N != 0){

          int count = 0;

          for(int i = 0; i<N;i++){
             scanf("%d" ,&ticket[i]);
            }

          for (int i = 0 ; i<N ;i++){
              for(int j = i+1; j<N ;j++){
                  if(ticket[i] == ticket[j])
                   count++;
                }
            }

          scanf("%d %d" ,&M ,&N);

          printf("%d\n",count);
    
        }

   
       return 0;
    }
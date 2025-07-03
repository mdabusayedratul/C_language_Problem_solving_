#include<stdio.h>
int main(){
    /*
    step 1 : read a integer value ;
    step 2 : calculate the smallest possible number of banknotes & moedas;
        --> The possible banknotes are 100, 50, 20, 10, 5, 2;
        --> The possible moedas are 1 ,0.50 ,0.25 ,0.10 ,0.05 ,0.01;

    step 3 : print te value;    
    */
    float A;
    scanf("%f" ,&A);
    int N = (int)A;
    int M;
    M =(int)((A - N)*100+.5);

    if (A<0 || A>1000000){
        printf("Error!!Enter number between 0 to 1000000.\n");
        return 1;
    }
    int note[] = {100,50,20,10,5,2};
   
    printf("NOTAS:\n");
    for(int i = 0;i<6;i++){
        int count = N/note[i];
        printf("%d nota(s) de R$ %d,00\n" ,(int)count,note[i]);
        N = N % note[i];
    };
    M += N*100;
     float moedas[] = {1 ,0.50 ,0.25 ,0.10 ,0.05 ,0.01};
     int coin[] = {100 ,50 ,25 ,10 ,05 ,01};
    
    printf("MOEDAS\n");
    for(int i = 0;i<6;i++){
        int count = M/coin[i];
        printf("%d moeda(s) de R$ %.2f\n",(int)count,moedas[i]);
        M = M % coin[i];
    }
    

    return 0;
} 
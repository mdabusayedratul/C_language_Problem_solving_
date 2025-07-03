#include<stdio.h>
int main(){
    /*
    step 1 : read a integer value ;
    step 2 : calculate the smallest possible number of banknotes;
        --> The possible banknotes are 100, 50, 20, 10, 5, 2 and 1;
    step 3 : print te value;    
    */
   
    int N;
    scanf("%d" ,&N);
    if (N<=0 || N>=1000000){
        printf("Error!!Enter number between 0 to 1000000.\n");
        return 1;
    }
    printf("%d\n" ,N);
    
    int note[] ={100,50,20,10,5,2,1};

    for(int i = 0;i<7;i++){
        int count = N/note[i];
        printf("%d nota(s) de R$ %d,00\n" ,count,note[i]);
        N = N % note[i];
    }
    

    return 0;
}
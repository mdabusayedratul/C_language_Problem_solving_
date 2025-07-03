#include<stdio.h>

 void revarce(int arr [] ,int n);


int main(){

    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    reverce( arr ,size);
    for(int i = 0; i<6; i++){
        printf("%d\t" ,arr[i]);
    }
    printf("\n");
    
    return 0;
}
void reverce(int arr[], int n){

    for(int i = 0; i < n/2; i++){

        int firstvul = arr[i];
        int secondvul = arr[n-i-1];
        //exchange
        arr[n-i-1] = firstvul;
        arr[i] = secondvul;

    }

    return ;
}
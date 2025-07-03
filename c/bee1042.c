#include<stdio.h>
//bouble sort
void sort (int array[] ,int size);
void printFun(int array[] ,int size);

int main (){ 

    int array [3], old [3];

    for(int i = 0; i<3 ;i++){
    scanf("%d" ,&array[i]);
    }
    for(int i = 0; i<3 ;i++){
    old [i]= array[i];
    }
    int size = sizeof(array)/sizeof(array[0]);
    sort (array ,size);

    printFun(array,size);
    printf("\n");
    printFun(old,size);

}
void sort (int array[] ,int size){
    for( int i = 0; i<size-1; i++ ){
        for(int j = 0;j<size-i-1; j++){
            if(array[j]>array[j+1]){
               int tamp = array[j] ;
               array[j] = array [j+1];
               array[j+1] = tamp;

            }
        }
    }
   
    return ;
}
void printFun(int array [],int size){
    for(int i = 0; i<size ;i++){
    printf("%d\n" , array[i]);
    }
   return ;
}
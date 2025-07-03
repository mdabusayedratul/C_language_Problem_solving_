#include<stdio.h>
void slice (char nstr [], int n , int m);

int main (){
    int n = 3 ,m = 7;
    char str [100]="ummamehejabin";
    slice(str , 3 ,7);
    return 0;
}
void slice (char str [], int n , int m){
    char nstr[100];
    int i = 0;
    int j = 0;
    for(i=n; i<=m ; i++ , j++){
        nstr[j] = str [i];
     }
     puts(nstr);
    return ;
}
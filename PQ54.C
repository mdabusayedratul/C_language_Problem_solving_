#include<stdio.h>
void count (char str []);
int main (){
    char str [] = "sayed";
    count(str);
    return 0;
}
void count (char str []){
   int count = 0;
   for(int i = 0; str [i] != '\0'; i++ ){
    if( str[i] == 'a' || str[i]=='e' || str[i]== 'i' || str[i]== 'o' || str[i]=='u'){
        count++;
    }
   }
   printf("%d" ,count);
   return ;
}
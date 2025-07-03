#include<stdio.h>

int main () {
  char ch ='*';
  for(int i = 0;i<20;i++){
    printf("%c" ,ch);
    if((i+1)%5 == 0){
      printf("\n");
    }
    
  }
  // printf("\n");
  return 0;

}
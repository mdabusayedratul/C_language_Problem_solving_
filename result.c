#include<stdio.h>
// this program showing result greads by entering your score

int main(){
    int num;
    printf("Enter your score :");
    scanf("%d" , &num);

    //conditions

    if (num>=0 && num <=32){
    printf("Fail");
    }
    else if (num>=33 && num<=39){
        printf("D");

    }
    else if (num>39 && num<=49)
    {
      printf("C+");
    
    }
    else if ( num> 49 && num<=59){
        printf("B+");

    }
    else if (num>59 && num <=69){
        printf("A-");

    }
    else if (num>69 && num<=79){
        printf("A");

    }
    else if ( num>79 && num<=100){
        printf("A+");

    }
    else {
        printf ( "FUCK YOU BRO ");
    }


    
    return 0;


}
#include<stdio.h>
#include<math.h>

float sqRN(float a);

int main(){
    float c;
    printf("enter a number for square root :");
    scanf("%f",&c);
    sqRN(c);

    return 0;
}
float sqRN(float a){
    if(a<0){
        printf("error\n");
    }
    else{

       a = pow(a ,.5); 
       printf("%.3f\n" ,a);
    }
       return a;
}
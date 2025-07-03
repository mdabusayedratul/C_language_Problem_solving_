#include <stdio.h>
#include<math.h>
 
int main() {
 
    double I = 7.8;

    if(fabs((I - round(I)) <1e-9))
    printf("%lu",I);
 
    return 0;
}
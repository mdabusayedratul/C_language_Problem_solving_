#include <stdio.h>

int main() {
    // Write code here
    float num1, num2, result;
    char oparetor;
    scanf("%c", &oparetor);
    scanf("%f", &num1);
    scanf("%f", &num2);

    if (oparetor=='+'){
        printf("%f", num1+num2);
    }
    else if (oparetor=='-'){
        printf("%f", num1-num2);
    }
    else if (oparetor=='*'){
        printf("%f", num1*num2);
    }
    else if (oparetor=='/'){
        printf("%f", num1/num2);
    }
    else{
        printf("Error");
    }
    return 0;
}
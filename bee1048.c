#include<stdio.h>

int main(){

    float salary ;
    scanf("%f" ,&salary);

    if(salary>=0 && salary<=400.00){
        float reAdj = salary * .15;
       float newSalary = salary + reAdj;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n" ,newSalary,reAdj);
    }
    
    if(salary>=400.01 && salary<=800.00){
        float reAdj = salary * .12;
       float newSalary = salary + reAdj;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n" ,newSalary,reAdj);
    }

    if(salary>=800.01 && salary<=1200.00){
        float reAdj = salary * .10;
       float newSalary = salary + reAdj;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n" ,newSalary,reAdj);
    }
    if(salary>=1200.01 && salary<=2000.00){
        float reAdj = salary * .07;
       float newSalary = salary + reAdj;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n" ,newSalary,reAdj);
    }
    if(salary>2000.00){
        float reAdj = salary * .04;
       float newSalary = salary + reAdj;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n" ,newSalary,reAdj);
    }
    
    
    return 0;
}
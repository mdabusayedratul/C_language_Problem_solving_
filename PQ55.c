#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name [100];
};
int main (){
struct student s1;
s1.roll = 20;
s1.cgpa = 2.81;
strcpy(s1.name , "md abu sayed ratul");

printf("name = %s\n" ,s1.name);
printf("roll = %d\t" ,s1.roll);
printf("cgpa = %.2f\n" ,s1.cgpa);

struct student s2;
s2.roll = 21;
s2.cgpa = 4.00;
strcpy(s2.name , "kabir");
printf("name = %s\n" ,s2.name);
printf("roll = %d\t" ,s2.roll);
printf("cgpa = %.2f\n" ,s2.cgpa);

return 0;
}
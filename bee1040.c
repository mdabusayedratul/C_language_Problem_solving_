#include <stdio.h>
 
int main() {
 
 float N1,N2,N3,N4,avg;
 scanf("%f %f %f %f" ,&N1 ,&N2 ,&N3 ,&N4);
 
 avg = (N1*2 + N2*3 + N3*4 + N4*1)/10;
 
 if (avg >=7){
     printf("Media: %.1f\n",avg);
     printf("Aluno aprovado.\n");
 }
 else if (avg < 5){
     printf("Media: %.1f\n",avg);
     printf("Aluno reprovado.\n");
 }
 else if (avg >=5 && avg<7){
    printf("Media: %.1f\n",avg);
    printf("Aluno em exame.\n");
    float N5;
    scanf("%f" ,&N5);
    printf("Nota do exame: %.1f\n" ,N5);
    printf("Aluno aprovado.\n");
    printf("Media final: %.1f\n" ,(avg+N5)/2);
 }

    return 0;
}
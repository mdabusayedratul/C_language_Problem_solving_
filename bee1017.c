#include<stdio.h>
int main(){
    //car speed = 12 km/L
    //step1 : read spent time & average time
    //step 2 :calculate the distence & and how many fuel needed 
    int spenTime ,aveSpeed;
    float neededFuel ,totalDis;
    int fuelperh = 12; 

    
    printf("Enter the spent time :");
    scanf("%d" ,&spenTime);
    printf("Enter the average speed :");
    scanf("%d" ,&aveSpeed);
    totalDis = spenTime * aveSpeed;
    neededFuel = totalDis / fuelperh ;

    printf("%.3f\n" ,neededFuel);


    return 0;
}
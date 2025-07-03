#include<stdio.h>
#include<math.h>
int tem(int t);
int main(){
    int temp;

    printf("enter your temp :");
    scanf("%d" ,&temp);

   tem(temp);
    return 0;
}
int tem(int t){ 
    
    if (t <=21){   printf("cold\n");

    }
    else  {printf("hot\n");
    }
return 0;
}

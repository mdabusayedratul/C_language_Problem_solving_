#include <stdio.h>
 
int main() {
 
  int N,M;
  
  
  
  while (scanf("%d %d" ,&N ,&M) != EOF)
  {
    unsigned long long sum ,factOfM,factOfN;
  factOfM = 1;
  factOfN = 1;
     for(int i = 1;i<=M;i++){
      factOfM = factOfM * i;
  }
  for(int i = 1;i<=N;i++){
      factOfN = factOfN * i;
  }
  
  sum = factOfM + factOfN;
  
  printf("%llu\n" ,sum);
  }
  
 
    return 0;
}
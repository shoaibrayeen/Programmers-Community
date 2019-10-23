#include<stdio.h> 
#include<math.h> 
long int nthFibonacci(int n) { 
  return round(pow(((1 + sqrt(5)) / 2), n) / sqrt(5)); 
} 
int main () 
{ 
  int n;
  scanf("%d",&n);
  printf("%ld", nthFibonacci(n)); 
  return 0; 
} 

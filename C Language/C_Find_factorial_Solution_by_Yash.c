#include<stdio.h>

int factorial(int n);

int main()
{
    
    int n,fact,i;
    printf("enter the number ");
    scanf("%d",&n);
    printf("factorial is %d",factorial(n));
    return 0;

}

int factorial(int n)
   {
  if(n==0)
  {
    return 1;
  }
  
  int factnm1=factorial(n-1);
  int factn=factnm1 * n ;
  return factn;
  
   }
  
  
  
  
     /*  int i,n,fact;
   for(i=0;i<=n;i++)
   {
       fact=n*i;
       printf("%d",fact);

        return fact;
   }*/
   
   
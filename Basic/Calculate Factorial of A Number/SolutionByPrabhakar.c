#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned long long fact=1; //factorial of a number can be large.So i have used unsinged long long int. It can take upto 18,446,744,073,709,551,615 value.
   int i,n;
   scanf("%d",&n);
   if(n==0){
        printf("1");
   }
   if(n>0){
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
printf("%llu",fact);
   }
return 0;
}

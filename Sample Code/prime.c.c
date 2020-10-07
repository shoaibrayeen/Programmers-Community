#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("Enter a positive integer:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
	if(n%i==0)
	{
		flag=1;
		break;
	}
}
if (n==1)
printf("It is not a prime number");
else
 {
	if(flag==0)
	  printf("It is a prime number");
	else
	  printf("It is not a prime number");
 }
return 0;
}

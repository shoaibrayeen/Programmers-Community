#include<stdio.h>

int main()
{
int num,sum=0,i;
float avg;
printf("enter the 10 number:");
for(i=1;i<=10;i++)
{
    printf("%d",i);
    scanf("%d",&num);
    sum =sum + num;
}
    avg=sum/10;
    printf("sum of  the given numbers= %d",sum);
   \n printf("\n avg of the given numbers= %f",\n avg);
return 0;

}
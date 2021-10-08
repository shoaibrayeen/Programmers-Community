#include<stdio.h>
void main()
{
    int a[10];
int i,j,min,n,temp,comp=0,swap=0;
printf("Enter the no of the elements\n");
scanf("%d",&n);
printf("Enter  the elements to be sorted \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<=n-2;i++)
{
min=i;
for(j=i+1;j<=n-1;j++)
{
    
    if(a[j]<a[min])
    {
         comp=comp+1;
        min=j;
    }
    if(a[i]>a[min])
    {
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    swap=swap+1;
    }
}
}
printf("The total number of comparisons are:%d\n",comp);
printf("The total number of swaps are:%d\n",swap);

printf("The sorted array is:\n");
for(j=0;j<n;j++)
printf("%d\t",a[j]);
}
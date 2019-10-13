#include <stdio.h>
#include <stdlib.h>

int main()
{
 unsigned long long num;
 int count=0;
 scanf("%lld",&num);
 if(num==0)
    printf("1");
 else{
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("%d",count);
 }
    return 0;
}

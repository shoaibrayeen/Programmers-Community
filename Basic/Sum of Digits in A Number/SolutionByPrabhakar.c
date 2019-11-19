#include <stdio.h>
void sod(int n);
int main()
{
    int num;
   scanf("%d",&num);
   sod(num);
    return 0;
}
void sod(int n){
    
    int count,sum;
    if(n>0){
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        sum=(count*(count+1))/2;
        printf("%d",sum);
    }
    else{
        printf("No is negative.");
    }
}

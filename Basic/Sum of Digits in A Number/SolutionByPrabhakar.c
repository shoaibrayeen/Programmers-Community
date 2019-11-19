#include <stdio.h>
void sod(int n);

int main()
{
    int num;
    printf("\nEnter Number\t:\t");
    scanf("%d",&num);
    sod(num);
    return 0;
}

void sod(int n){

    int sum = 0;
    if(n > 0){
        while(n!=0)
        {
            sum += n%10;
            n /= 10;
        }
        printf("Sum\t:\t%d\n",sum);
    }
    else if (n == 0) {
        printf("\nSum\t:\t0\n");
    }
    else{
        printf("No is negative.\n");
    }
}

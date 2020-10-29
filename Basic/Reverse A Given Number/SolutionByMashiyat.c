#include <stdio.h>
#include <conio.h>

int reverse(int);
void main() {
    int number,rev_no;
    printf("\n Enter a number\n");
    scanf("%d",&number);
    rev_no=reverse(number);
    printf("\n The reverse is: %d", rev_no);
    getch();
}
int reverse(int n) {
    int rem,i,rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}

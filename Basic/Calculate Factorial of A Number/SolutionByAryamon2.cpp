//factorial as recursive function
#include<iostream.h>
#include<conio.h>
double fact(int n)
{
    if(n==0)
    {
       return 1;
    }
    return n*fact(n-1);

}
void main()
{
   int num;
   clrscr();
   cout<<"\nEnter the number\n ";
   cin>>num;
   cout<<"\nThe factorial is\t:\t "<<fact(num);
   getch();



}

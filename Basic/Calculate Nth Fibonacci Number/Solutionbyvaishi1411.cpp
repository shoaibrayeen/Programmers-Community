//c++program to find nth term of fibonacci series
 
 #include<iostream>
 using namespace std;

//prototype of fibo_n()  function

int fibo_n(int );

//Driver code

int main()
{ 
  int N;
  cout<<"Enter a postive number: ";
  cin>>N;
if(N>=0) 
cout<<" Nth Number in Fibonacci Series: "<<fibo_n(N);
else 
cout<<"You are only allowed to enter positive number!";
return 0;
} 

//defenition of fibo_n()  function 

int fibo_n(int N) 
{ int shi[N+2];
  shi[1]=0;
 shi[2]=1;
 for(int i=3;i<=N;i++)
 { 
   shi[i]=shi[i-1]+shi[i-2];
  }
 return shi[N];
}

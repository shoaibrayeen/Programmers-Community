
#include<iostream>
using namespace std;

//void sortt(int a[100],int n)
//{


//}

int main()
{
       int n;
      cin>>n;
 
      int a= new int[n];

for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
//sortt(a,n);
  int Zcount=0;

for(int i=0;i<n;i++)
{
            if(a[i]==0)
             {
                Zcount++;
              }
}

int i=0;
while(i<n)
{
   while(Zcount>0)
   {
        a[i]=0;
        Zcount--;
        i++;
   }
  
   a[i]=1;
   i++;
}

  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }

}

#include<iostream>
using namespace std;

int r_rotate(int shi[],int n , int v);

int main(){ 
        int n,i,v;
        cout<<"Enter the size of the array: ";
        cin>>n;
        int *shi=new int [n];
        
        cout<<"Enter the elements of the array : ";
        for(i=0;i<n;i++)
        { 
          cin>>shi[i];
        } 
          
          cout<<"Enter the key element through which Rotation is to be done : ";
            cin>>v;
                  
                  r_rotate(shi,n,v);
                    cout<<"Right Rotated array through key element "<<v<<" is : ";
                    for(i=0;i<n;i++){ 
                    cout<<shi[i];
                    } 
return 0;
} 

int r_rotate(int shi[],int n,int v){ 
            for(int i=0;i<v;i++){ 
            int j, l;
           
           l=shi[n-1];

            for(j=n-1;j>0;j--){ 
            shi[j]=shi[j-1] ;
            } 
        shi[0]=l;
      } 
}

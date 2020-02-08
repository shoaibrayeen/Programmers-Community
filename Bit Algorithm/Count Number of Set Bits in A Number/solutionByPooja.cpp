//Given a number count no of 1's in its binary
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num,count=0;
    vector <int>v1;
    
    cout<<"Enter a number";
    cin>>num;
    
    cout<<"\nNo of 1's in binary of "<<num;

    while(num!=0)
    {
        v1.push_back(num%2);
        num/=2;
    }
    
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]==1)
          count++;
    }
    
    cout<<" is: "<<count;
        
    
    return 0;
}

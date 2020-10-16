#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int numcompare(int X,int Y){
    

string num1 = to_string(X) + to_string(Y);
string num2 = to_string(Y) + to_string(X);

return num1.compare(num2)>0?1:0;


}

int printlargest(vector<int> arr)
{
    
sort(arr.begin(),arr.end(),numcompare);

for(int j=0;j<arr.size();j++)
    {
        cout<<arr[j];
    }

return 0;    
}


int main() {
    
int n=0;
cin>>n;

vector<int> inputarr(n);

for(int i=0;i<n;i++)
{
    cin>>inputarr[i];
}



printlargest(inputarr);

    return 0;
}

#include <iostream>
using namespace std;


// To find the missing nmber from an array using xor .

/* XOR conditions 

1.)  a ^ a =0
2.)  a ^ 0 =a
3.) 0 ^ a =a
4.) 0^0 = 0

*/
int missing_num (int a[],int n) {
   
    // To find the xor of array given by the user
    int e1=a[0];
    int e2=1;
    
    for(int i=1;i<n;i++){
    // This is done beause if we do a[i] ^ a[i+1] and we have odd numbers ,then we would just have a[i] and no value of a[i+1]
    // It's better xor'ing one at a time
        e1 = e1 ^ a[i];        
    }
   
   
    // To find the exor of array from 1 to n
   
    for(int i=2;i<=n;i++) { // We need to go till n+1 as we have n numbers in the given array a , which has one element misisng
        e2 = e2 ^ i;          // We start the lop from 2 as the initial value of variable e2 is 1 and if we start loop from 1 then, 1 ^ 1 =0        
    }
    
                              
    
    return (e1 ^ e2);
   
}
int main(void){
    // If we want the user to eenter the array
//   int n;
//   int a[100];
//   std::cout << "Enter the size of an array" << std::endl;
//   std::cin>>n;
   
//   cout<<"The array entered is :";
//   for(int i=0;i<n;i++){
//   cin >>a[i];
//   }

int a[] = {1,2,3,4};
int sizes = sizeof(a);
cout<<"The sizeof array is :"<<sizes<<endl;

int n = sizeof(a)/sizeof(a[0]);
cout<<"The number of elements in array is :"<<n<<endl;

int x=missing_num(a,n);
cout<<"The missing mumber of array is :"<<x;
} 

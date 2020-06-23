#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int count=0;
	if(n == 2){
		return true;
	}
	for(int i = 2;i <= sqrt(n);i++){
		if(n%i == 0){
			count++;
		}
	}
	if(count > 0){
		return false;
	}
	else{
		return true;
	}
}


int main()
{
    int n;
    cout << "\n Enter value of n:" << endl;
    cin >> n;
    if(isPrime(n))
       cout << "Yes" << endl;
    else
       cout << "No" << endl;

  return 0;
}

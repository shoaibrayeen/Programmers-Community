#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int> inputArray, int numberOfElements) {
	int missingNumber = numberOfElements + 1;
	for(int i = 0; i < numberOfElements; i++)
		missingNumber ^= inputArray[i] ^ (i + 1);
		
	return missingNumber;
}

int main() {
	int numberOfElements = 0;
	cin>>numberOfElements;
	vector<int> inputArray(numberOfElements);
	for(int i = 0; i < numberOfElements; i++)
		cin>>inputArray[i];
	cout<<findMissingNumber(inputArray, numberOfElements);
	return 0;
}

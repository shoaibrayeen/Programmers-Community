#include <bits/stdc++.h>
using namespace std;

vector<int> mergeTwoSortedArrays(vector<int> inputArray1, int sizeOfArray1, vector<int> inputArray2, int sizeOfArray2) {
	vector<int> resultArray(sizeOfArray1 + sizeOfArray2, 0);
	int currentIndexArray1 = 0, currentIndexArray2 = 0, currentIndexresultArray = 0;
	while(currentIndexArray1 < sizeOfArray1 && currentIndexArray2 < sizeOfArray2) {
		if(inputArray1[currentIndexArray1] < inputArray2[currentIndexArray2]) 
			resultArray[currentIndexresultArray++] = inputArray1[currentIndexArray1++];
		else
			resultArray[currentIndexresultArray++] = inputArray2[currentIndexArray2++];
	}
	
	while(currentIndexArray1 < sizeOfArray1) 
		resultArray[currentIndexresultArray++] = inputArray1[currentIndexArray1++];
	
	while(currentIndexArray2 < sizeOfArray2) 
		resultArray[currentIndexresultArray++] = inputArray2[currentIndexArray2++];

	return resultArray;
}

int main() {
	int sizeOfFirstArray = 0, sizeOfSecondArray = 0;
	cin>>sizeOfFirstArray>>sizeOfSecondArray;
	
	vector<int> inputArray1(sizeOfFirstArray);
	vector<int> inputArray2(sizeOfSecondArray);
	
	for(int i = 0; i < sizeOfFirstArray; i++)
		cin>>inputArray1[i];
	for(int i = 0; i < sizeOfSecondArray; i++)
		cin>>inputArray2[i];
	
	vector<int> resultArray = mergeTwoSortedArrays(inputArray1, sizeOfFirstArray, inputArray2, sizeOfSecondArray);
	for(int i = 0; i < resultArray.size(); i++)
		cout<<resultArray[i]<<"  ";
	
	return 0;
}

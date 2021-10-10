#include <bits/stdc++.h>
using namespace std;

int findMajorityNumber(vector<int> inputArray, int numberOfElements)
{
    int indexOfMajorityNumber = 0, countOfNumber = 1;
    for (int i = 1; i < numberOfElements; i++) {
        if (inputArray[indexOfMajorityNumber] == inputArray[i])
            countOfNumber++;
        else
            countOfNumber--;
        if (countOfNumber == 0) {
            indexOfMajorityNumber = i;
            countOfNumber = 1;
        }
    }

    countOfNumber = 0;
    for (int i = 0; i < numberOfElements; i++)
        if (inputArray[indexOfMajorityNumber] == inputArray[i])
            countOfNumber++;
    if (countOfNumber <= numberOfElements / 2)
        indexOfMajorityNumber = -1;

    return indexOfMajorityNumber;
}

int main()
{
    int numberOfElements = 0;
    cin >> numberOfElements;
    vector<int> inputArray(numberOfElements);
    for (int i = 0; i < numberOfElements; i++)
        cin >> inputArray[i];

    int majorityNumber = findMajorityNumber(inputArray, numberOfElements);
    if (majorityNumber == -1)
        cout << "No Majority Element Exists! ";
    else
        cout << majorityNumber;

    return 0;
}

#include <iostream>
#include<string>
#include<string.h>
using namespace std;

string reverse(char str1[100])
{
    int lenStr = 0, temp;
    lenStr = strlen(str1);
    temp = lenStr;
    if(temp % 2 !=0)
    temp = temp - 1; //it is to aoid the addition of 1 in the actual length due to the presence of the null character.
    for(int i=0; i<temp/2; i++,temp--)
    {
        str1[i] = str1[i] + str1[temp];
        str1[temp] = str1[i] - str1[temp];
        str1[i] = str1[i] - str1[temp];
    }
    return str1;
}

int main()
{
    char str1[100];
    std::cout<<"Enter the String: ";
    std::cin>>str1;
    std::cout<<"Reversed String: " << reverse(str1) << std::endl;
    return 0;
}

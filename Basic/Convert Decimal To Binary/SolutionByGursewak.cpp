#include <iostream>

using namespace std;
void decToBinary(int n) {
    bool bNum[32];
   int i = 0;
    while (n > 0) {
       bNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << bNum[j];
}
int main()
{
    int num;
    cout<<"Enter a decimal number to convert to Binary.\n";
    cin>>num;
    if(num < 0){
       cout<<"Enter valid number";
    }
    else if ( num == 0 ) {
        cout << '0';
    }
    else{
       decToBinary(num);
    }
    return 0;
}

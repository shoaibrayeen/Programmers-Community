#include <iostream>
using namespace std;
void LCM(int n1,int n2){
    // maximum value between n1 and n2 is stored in max
    int max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);
}
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n1, n2, max;
        cout << "Enter the numbers: ";
        cin >> n1 >> n2;
        LCM(n1,n2);
    }
    return 0;
        
}

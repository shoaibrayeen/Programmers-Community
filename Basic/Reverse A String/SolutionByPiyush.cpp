#include <iostream>
using namespace std;

string reversed_string(char string_to_reverse[100])
{
    int length_of_string = 0, length_temp;
    length_of_string = strlen(string_to_reverse);
    length_temp = length_of_string;
    if (length_temp % 2 != 0)
        length_temp = length_temp - 1; //it is to aoid the addition of 1 in the actual length due to the presence of the null character.
    for (int i = 0; i < length_temp / 2; i++, length_temp--) {
        string_to_reverse[i] = string_to_reverse[i] + string_to_reverse[length_temp];
        string_to_reverse[length_temp] = string_to_reverse[i] - string_to_reverse[length_temp];
        string_to_reverse[i] = string_to_reverse[i] - string_to_reverse[length_temp];
    }
    return string_to_reverse;
}

int main()
{
    char string_to_reverse[100];
    cout << "\nEnter the string that you want to reverse:";
    cin >> string_to_reverse;
    cout << reversed_string(string_to_reverse);
    return 0;
}

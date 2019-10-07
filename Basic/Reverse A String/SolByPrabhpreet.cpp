#include <bits/stdc++.h> 
using namespace std;

void swap(char* a, char* b)
{ 
    char* temp;

    *temp = *a;
    *a = *b;
    *b = *temp;

    return;
}
  
void reverse(string& str)    
{ 
    int n = str.length(); 

    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 

    return; 
} 
  
int main() 
{ 
    string str = ""; 

    std::cout << "Enter the String: ";
    std::cin >> str; 

    reverse(str);   
    std::cout << "Reversed String: " << str << std::endl; 

    return 0;  
} 

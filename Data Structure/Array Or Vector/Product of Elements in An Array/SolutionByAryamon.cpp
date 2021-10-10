//to display the product of all elements in an array
#include <conio.h>
#include <iostream.h>

int prodarr(int* a, int size)
{
    int product = 1;
    for (int i = 0; i < size; i++) {
        product = product * a[i];
    }
    return product;
}

void main()
{
    clrscr();
    /********************input*********************************/
    int size;
    cout << "\nEnter the size\t:\t";
    cin >> size;
    int* a = new int[size];
    cout << "enter the elements of the array ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    cout << "\nProduct \t" << prodarr(a, size);
    getch();
}

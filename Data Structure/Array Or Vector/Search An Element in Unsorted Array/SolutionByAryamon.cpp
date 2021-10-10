//to search the elements using linear search
#include <conio.h>
#include <iostream.h>
#include <process.h>
int lin_search(int* a, int size, int ele)
{
    for (int i = 0; i < size; i++) {
        if (a[i] == ele) {
            return i;
        }
    }
    return -1;
}

void main()
{
    clrscr();
    /********************input******************************/
    int size;
    cout << "\nEnter the size\t:\t";
    cin >> size;
    int* a = new int[size];
    cout << "enter the elements of the array ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    int ele;
    cout << "enter the element to be searched " << endl;
    cin >> ele;
    /********************output*****************************/
    int retval = lin_search(a, size, ele);
    if (retval == -1) {
        cout << " \n Element  not  found ";
    } else {
        cout << "Element found ";
    }
    getch();
}

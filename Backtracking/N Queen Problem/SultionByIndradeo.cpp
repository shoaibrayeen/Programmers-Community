#include <bits/stdc++.h>
using namespace std;

bool helper(int **mtrix, int i, int j, int size)
{
    // checking for column
    for (int row = 0; row < i; row++)
    {
        if (mtrix[row][j] == 1)
            return false;
    }
    // checking for left daigonal
    int x = i;
    int y = j;
    while (x >= 0 && y >= 0)
    {
        if (mtrix[x][y] == 1)
            return false;
        x--;
        y--;
    }
    // checking for right daigonal
    x = i;
    y = j;
    while (x >= 0 && y < size)
    {
        if (mtrix[x][y] == 1)
            return false;
        x--;
        y++;
    }
    // after checking all condition.
    return true;
}

bool queen(int **mtrix, int i, int size)
{
    // base case
    if (i == size)
    {
        // print mtrix
        for (int z = 0; z < size; z++)
        {
            for (int j = 0; j < size; j++)
            {
                if (mtrix[z][j] == 1)
                    cout << "Q ";
                else
                    cout << "_ ";
            }
            cout << endl;
        }
        return true;
    }
    // recursive case
    for (int j = 0; j < size; j++)
    {
        // checking position for queen.
        if (helper(mtrix, i, j, size))
        {
            mtrix[i][j] = 1;
            bool tOrf = queen(mtrix, i + 1, size);
            if (tOrf)
                return true;
            // if previous position is not right.
            mtrix[i][j] = 0; // backtracking.
        }
    }
    // you tried all the position is the current row but could not place a queen.
    return false;
}

int main()
{
    int size;

    cout << "Enter the number of queen" << endl;
    cin >> size;

    int **mtrix = new int *[size];
    for (int i = 0; i < size; i++)
    {
        mtrix[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            mtrix[i][j] = 0;
        }
    }

    queen(mtrix, 0, size);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int NQueensCombi(vector< vector<bool> >& box, int row, int tnq, vector<bool>& arr_col, vector<bool>& arr_diag1, vector<bool>& arr_diag2)
{
    if (row == box.size() || tnq == 0)
    {
        if (tnq == 0)
        {
            return 1;
        }
        return 0;
    }

    int count = 0;

    for (int col = 0; col < box[0].size(); col++)
    {
        if (arr_col[col] == false && arr_diag1[row+col] == false && arr_diag2[row-col+box[0].size()-1] == false)
        {
            box[row][col] = true;
            arr_col[col] = true;
            arr_diag1[row+col] = true;
            arr_diag2[row-col+box[0].size()-1] = true;
            count += NQueensCombi(box, row + 1, tnq - 1, arr_col, arr_diag1, arr_diag2);
            box[row][col] = false;
            arr_col[col] = false;
            arr_diag1[row+col] = false;
            arr_diag2[row-col+box[0].size()-1] = false;
        }
    }
    return count;
}

int main()
{

    int n;
    cin>>n;
    vector< vector<bool> > box(n, vector<bool>(n, false));
    vector<bool> arr_col(n, false);
    vector<bool> arr_diag1((2*n)-1, false);
    vector<bool> arr_diag2((2*n)-1, false);
    cout<<NQueensCombi(box, 0, n, arr_col, arr_diag1, arr_diag2)<<endl;

    return 0;
} 

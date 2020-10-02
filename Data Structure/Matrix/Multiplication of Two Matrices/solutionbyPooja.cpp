/*
    Two Matrices are given and you need to multiply them..
    Input
        Two Matrices
        their dimensions
    Output
        Resultant Matrix
*/
#include<iostream>
using namespace std;

class matrix
{
    public:
    int arr[20][20];
    int row,col;
    void input_matrix();

};
void matrix::input_matrix()
{
    cout<<"Enter array element \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    }

}

void multiplication(matrix ob1,matrix ob2,matrix ob3)
{
    int res;
    if(ob1.col==ob2.row)
    {
        for(int i=0;i<ob1.row;i++)
        {
            for(int j=0;j<ob2.col;j++)
            {
                res=0;
                for(int k=0;k<ob1.col;k++)
                    res+=ob1.arr[i][k]*ob2.arr[k][j];
                ob3.arr[i][j]=res;
            }
        }

        cout<<"\nResultant matrix is : \n";
        for(int i=0;i<ob1.row;i++)
        {
            for(int j=0;j<ob2.col;j++)
                cout<<ob3.arr[i][j]<<" ";
                cout<<endl;
        }
    }
    else
        cout<<"Multiplication NOt Possible ";


}
int main()
{
    matrix obj[3];

    for(int i=0;i<2;i++)
    {

        cout<<"Enter the dimensions of the matrix ";
        cin>>obj[i].row>>obj[i].col;
        obj[i].input_matrix();
    }

    multiplication(obj[0],obj[1],obj[2]);

}

#include<iostream>
#include<fstream>
using namespace std;

struct mail
{
    char un[50];             // user name
    char pd[50];             // passsword
    void reg(int);
} obj[5];

void mail::reg(int k)
{
    int i=k;
    cout<<"\nEnter user name :: ";
    cin>>un;
    cout<<"\nEnter password :: ";
    cin>>pd;

    ofstream filout;
    filout.open("C:\\Users\\acer\\Documents\\registration.txt",ios::app|ios::binary);
    if(!filout)
    {
        cout<<"\nCannot open file\n";
    }
    else
    {
        cout<<"\n";
        filout.write((char *)&obj[i],sizeof(mail));
        filout.close();
    }

    cout<<"\n...........You are now registered.......... \n\n";

}   // end of sign up or register func

int main()
{
    int t;
    cout<<"\nEnter Registration Details for User 1 :: \n";
    obj[0].reg(0);
    cout<<"\nEnter Registration Details for User 2 :: \n";
    obj[1].reg(1);
    cout<<"\nEnter Registration Details for User 3 :: \n";
    obj[2].reg(2);

    mail obj2;

    ifstream filein;
    filein.open("C:\\Users\\acer\\Documents\\registration.txt",ios::in|ios::binary);
    if(!filein)
    {
        cout<<"\nUnable to open file to read\n";
    }
    else
    {
        cout<<"\nRegistered Details of All Users :: \n";
        filein.read((char *)&obj2,sizeof(obj2));
        while(filein)
        {
            cout<<"\nUsername :: "<<obj2.un<<"\nPasswword :: "<<obj2.pd<<"\n";
            filein.read((char *)&obj2,sizeof(obj2));
        }
            //filein.close();
    }
        return 0;
}

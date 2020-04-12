#include <iostream>
#include <conio.h>
using namespace std;

int stepsChain(int r, int c, int **mat, int steps, int rStart, int cStart){	// function to steps each chain in matrix
	int C=c-1, R=r-1;
	for(int k=0; k<steps ; k++){
		int i, temp = mat[rStart][cStart];

		for(i=cStart; i<C; i++)
			mat[rStart][i]=mat[rStart][i+1];

		for(i=rStart; i<R; i++)
			mat[i][C]=mat[i+1][C];

		for(i=C; i>cStart; i--)
			mat[R][i]=mat[R][i-1];

		for(i=R; i>rStart; i--)
			mat[i][cStart]=mat[i-1][cStart];

		mat[rStart+1][cStart]=temp;
	}

	return 1;
}

int main()
{ 
	int r,c, chainNum, steps;
	int rCount=0, cCount=0;
	cout<<"Enter row and column of matrix respectively\n";		// getting dimentions of matrix
	cin>>r;
	cin>>c;

	int** mat = new int*[r];		// initiating dynamic 2D array  
	for(int i = 0; i < r; ++i)
    	mat[i] = new int[c];
	cout<<"Enter elements of matrix\n";
	for(int i=0; i<r; i++){			// getting array input
		for(int j=0; j<c; j++){
			cin>>mat[i][j];
			cout<<"\t";
		}cout<<endl;
	}

	cout<<"Enter Number of Steps.\t";		// getting number of Steps
	cin>>steps;

	for(int i=r; i>0; i-=2)				// to find total number of chains 
		rCount++;
	for(int i=c; i>0; i-=2)
		cCount++;
	chainNum=(rCount>=cCount)? cCount:rCount;

	// for(int i=0; i<r; i++){					// printing normal array 
	// 	for(int j=0; j<c; j++){
	// 		cout<<mat[i][j]<<"\t";
	// 	}cout<<endl;
	// }

	
	int rStart=0, cStart=0, C=c, R=r;			// looping to steps each chain
	for(int i=0; i<chainNum ; i++){
		stepsChain(R, C, mat, steps, rStart, cStart);
		R--;
		C--;
		rStart++;
		cStart++;
	}

	cout<<endl<<endl;							// printing final 2D array
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<mat[i][j]<<"\t";
		}cout<<endl;
	}

	return 0;
}
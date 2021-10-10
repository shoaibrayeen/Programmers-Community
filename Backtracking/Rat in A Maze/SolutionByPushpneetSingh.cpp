#include <iostream>
using namespace std;
char maze[1001][1001];

bool RatInMaze(char maze[][5], int sol[][10], int i, int j, int n, int m)
{

    if (i == n - 1 && j == m - 1) {
        sol[i][j] = 1;
        // Print the path
        for (int k = 0; k < n; k++) {
            for (int l = 0; l < m; l++) {
                cout << sol[k][l] << ' ';
            }
            cout << endl;
        }
        cout << endl;
        return false;
    }

    sol[i][j] = 1;

    if (j + 1 < m && maze[i][j + 1] != 'X') {
        bool checkRight = RatInMaze(maze, sol, i, j + 1, n, m);
        if (checkRight == true) {
            return true;
        }
    }

    if (i + 1 < n && maze[i + 1][j] != 'X') {
        bool checkDown = RatInMaze(maze, sol, i + 1, j, n, m);
        if (checkDown == true) {
            return true;
        }
    }

    //backtrack
    sol[i][j] = 0;

    return false;
}

int main()
{

    /*
  Exmple
  char maze[5][5]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
  */

    int n, m;
    cin >> n >> m;

    for (int k = 0; k < n; k++) {
        for (int l = 0; l < m; l++) {
            cin >> maze[k][l];
        }
    }

    int sol[10][10] = { 0 };

    RatInMaze(maze, sol, 0, 0, n, m);

    return 0;
}

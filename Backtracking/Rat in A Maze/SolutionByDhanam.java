import java.util.*;

public class RatMaze {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of maze");
        int n = sc.nextInt();
        int[][] maze = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.println("Enter maze element");
                maze[i][j] = sc.nextInt();
            }
        }
        solveMaze(maze);
    }

    public static boolean solveMaze(int[][] maze) {
        int N = maze.length;
        int[][] soln = new int[N][N];

        if (canSolve(0, 0, soln, maze)) {
            System.out.println("Maze Solved! ");
            printMaze(soln);
            return true;
        }
        System.out.println("Maze Cannot be Solved! ");

        return false;
    }

    public static boolean isSafe(int x, int y, int[][] soln, int[][] maze) {
        int N = maze.length;
        if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) {
            return true;
        }
        return false;
    }

    public static boolean canSolve(int x, int y, int[][] soln, int[][] maze) {
        int N = maze.length;
        if (x == N - 1 && y == N - 1) {
            soln[x][y] = 1;
            return true;
        }

        if (isSafe(x, y, soln, maze)) {
            soln[x][y] = 1;
            if (canSolve(x, y + 1, soln, maze)) {        //go right
                return true;
            }
            if (canSolve(x + 1, y, soln, maze)) {        //go down
                return true;
            }
            soln[x][y] = 0;            //backtrack
            return false;
        }
        return false;
    }

    public static void printMaze(int[][] soln) {
        int N = soln.length;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print(soln[i][j] + " ");
            }
            System.out.println();
        }
    }
}

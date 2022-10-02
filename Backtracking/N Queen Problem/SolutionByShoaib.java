import java.util.Scanner;

public class SolutionByShoaib {
    public static int count = 0;

    public static void main(String args[]) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the chess board size\t");
        n = sc.nextInt();
        boolean chess[][] = new boolean[n][n];
        int qpsf = 0;
        int index = -1;  //first queen should sit on 0 place
        String ans = "";
        long starttime = System.currentTimeMillis();
        combinationQueens(chess, qpsf, ans, index);
        long endtime = System.currentTimeMillis();
        System.out.println("the total no of ways are\t:\t" + count);
        System.out.println("time taken is \t:\t" + (endtime - starttime) + " ms");

    }

    public static void combinationQueens(boolean chess[][], int qpsf, String ans, int index) {
        int n = chess.length;

        if (qpsf == n) {
            if (isSafe(chess) == true) {
                count++;
                System.out.print(count + " ");
                System.out.println(ans);
            }
            return;
        }


        for (int b = index + 1; b < n * n; b++) {
            int row = b / n;
            int col = b % n;
            if (chess[row][col] == false) {
                if (IsTheQueenSafe(chess, row, col) == true) {
                    chess[row][col] = true;
                    combinationQueens(chess, qpsf + 1, ans + " q" + (qpsf + 1) + " b" + b, b);
                    chess[row][col] = false;
                }
            }
        }
    }

    public static boolean isSafe(boolean[][] chess) {
        int n = chess.length;
        int m = chess[0].length;
        boolean ans = true;
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                //check only when queen is placed

                if (chess[row][col] == true) {

                    //when the queen sitting is not safe
                    if (IsTheQueenSafe(chess, row, col) == false) {
                        ans = false;
                    }

                }

            }
        }
        return ans;
    }


    public static boolean IsTheQueenSafe(boolean chess[][], int row, int col) {
        //2d direction array
        int dir[][] = {
                {0, -1},
                {1, -1},
                {1, 0},
                {1, 1},
                {0, 1},
                {-1, 1},
                {-1, 0},
                {-1, -1}
        };
        for (int di = 0; di < dir.length; di++) {
            for (int dist = 1; dist < chess.length; dist++) {
                //eqrow=enemyqueenrow
                int eqrow = row + dist * dir[di][1];
                //eqcol=enemyqueencol
                int eqcol = col + dist * dir[di][0];
                if (eqrow < 0 || eqcol < 0 || eqrow >= chess.length || eqcol >= chess[0].length) {
                    break;

                }
                if (chess[eqrow][eqcol] == true) {
                    return false;
                }

            }
        }
        return true;
    }


}

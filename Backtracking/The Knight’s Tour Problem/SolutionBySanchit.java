// Generate all moves of a knight starting in (row, col) such that knight visits 
//  all cells of the board exactly once.
// To mactch the sample output, when moving from (r,c) to 8 possible directions give 
// first precedence to (r - 2, c + 1) and move in clockwise direction.

// Input Format: a number n, the size of chess board
//               a number row, the starting row of knight
//               a number col, the starting column of knight
// Output Format: All configurations of the chess board representing route of knights through
//                the chess board starting in (row, col).

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class solutionBySanchit {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        String[] line1 = br.readLine().trim().split("\\s+");
        String[] line2 = br.readLine().trim().split("\\s+");
        String[] line3 = br.readLine().trim().split("\\s+");

        int n = Integer.parseInt(line1[0]);
        int sr = Integer.parseInt(line2[0]);
        int sc = Integer.parseInt(line3[0]);

        int[][] board = new int[n][n];

        driver(board,sr,sc,1);

    }
    // 8 possible directions in which the knight can move.
    static int[][] dir = { { -2, 1 }, { -1, 2 }, { 1, 2 }, { 2, 1 }, { 2, -1 }, { 1, -2 }, { -1, -2 }, { -2, -1 } };

    public static void display(int[][] board) {
        for (int[] row : board) {
            for (int ele : row)
                System.out.print(ele + " ");
            System.out.println();
        }
        System.out.println();
    }
    // We'll start from the given row, col and recursively call the driver function for next possible moves of knight. 
    public static void driver(int[][] board, int sr, int sc, int counter){
        if (counter == board.length * board[0].length) {
            board[sr][sc] = counter;
            display(board);
            board[sr][sc] = 0;
            return;
        }
        board[sr][sc] = counter;
        for (int d = 0; d < dir.length; d++) {
            int r = sr + dir[d][0];
            int c = sc + dir[d][1];

            if (r >= 0 && c >= 0 && r < board.length && c < board[0].length && board[r][c] == 0) {
                driver(board, r, c, counter + 1);
            }
        }
        board[sr][sc] = 0;
    }
}
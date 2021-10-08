import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        
        int N = scn.nextInt();
        
        int r = scn.nextInt();
        int c = scn.nextInt();
        
        int[][] chess = new int[N][N];
        
        printKnightsTour(chess, r, c, 1);
    }
    
    static int[][] dir = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};

    public static void printKnightsTour(int[][] chess, int r, int c, int upcomingMove) {
        if(upcomingMove == chess.length * chess.length) {
            chess[r][c] = upcomingMove;
            displayBoard(chess);
            chess[r][c] = 0;
            return;
        }    
        
        chess[r][c] = upcomingMove;
        
        for(int i = 0; i < 8; i++) {
            int nr = r + dir[i][0];
            int nc = c + dir[i][1];
            
            if(nr >= 0 && nr < chess.length && nc >= 0 && nc < chess.length && chess[nr][nc] == 0)
                printKnightsTour(chess, nr, nc, upcomingMove + 1);
        }
        
        chess[r][c] = 0;
    }

    public static void displayBoard(int[][] chess){
        for(int i = 0; i < chess.length; i++){
            for(int j = 0; j < chess[0].length; j++){
                System.out.print(chess[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println();
    }
}

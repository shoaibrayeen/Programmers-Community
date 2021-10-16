/*
Problem Statement: You are given 2 integers N and M , N is the number of vertices, M is the number of edges. You'll also be given ai, bi and wi where ai and bi represents an edge from a vertex ai to a vertex bi and wi respresents the weight of that edge.The task is to find the shortest path from source vertex (vertex number 1) to all other vertices.

Sample Input:
5 5
1 2 5
1 3 2
3 4 1
1 4 6
3 5 5

Sample Output:
5 2 3 7 
*/
import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int m = scn.nextInt();
    int[][] matrix = new int[m][3];
    for (int i = 0; i
         < m; i++) {
      int u = scn.nextInt();
      int v = scn.nextInt();
      int w = scn.nextInt();
      matrix[i][0] = u - 1;
      matrix[i][1] = v - 1;
      matrix[i][2] = w;
    }
    int[] path = new int[n];
    Arrays.fill(path, Integer.MAX_VALUE);
    path[0] = 0;
    scn.close();
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j
           < m; j++) {
        int u = matrix[j][0];
        int v = matrix[j][1];
        int w = matrix[j][2];
        if (path[u] == Integer.MAX_VALUE) {
          continue;
        }
        if (path[u] + w < path[v]) {
          path[v] = path[u] + w;
        }
      }
    }
    for (int i = 1; i < path.length; i++) {
      if (path[i] == Integer.MAX_VALUE)
      {
        System.out.print( "1000000000" + " " );
      }
      else {
        System.out.print(path[i] + " " );
      }
    }
  }
}

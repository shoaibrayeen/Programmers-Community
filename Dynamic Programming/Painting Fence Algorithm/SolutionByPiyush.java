import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        
        int n = scn.nextInt(); //fences
        int k = scn.nextInt(); //colors
        
        System.out.println(possible_ways(n, k));
    }
    
    public static int possible_ways(int n, int k) {
        if(n == 1) {  // case :- if number of fences(n) == 1
            return k;
        }
        
        int osc = k; //old same colors- last 2 fences have been painted with the same color
        int odc = k * (k-1); //old different colors- last 2 fences have been painted with the different colors
        
        for(int i = 3; i <= n; i++) { 
            int nsc = odc; //new same colors - ways in which moving one fence ahead with making last 2 adjacent fences of same color
            int ndc = (osc + odc) * (k-1); 
            odc= ndc;
            osc = nsc;
        }
        return odc + osc;
    }
}

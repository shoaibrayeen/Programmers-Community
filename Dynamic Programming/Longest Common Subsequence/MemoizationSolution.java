class LCS {
    static int dp[][];
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt(); //number of test cases
		while(T-->0) {
		    int N = sc.nextInt(), M = sc.nextInt();
		    dp = new int[N+1][M+1];
		    sc.nextLine();
		    String s1 = sc.nextLine();
		    String s2 = sc.nextLine();
		    System.out.println(lcs(s1, s2, N, M));
		}
	}
	public static int lcs(String s1, String s2, int N, int M) {
	    if(N == 0 || M == 0) return 0;
	    if(dp[N][M] != 0) return dp[N][M]; //memoization step
	    if(s1.charAt(N-1) == s2.charAt(M-1)) {
	        dp[N][M] = 1 + lcs(s1, s2, N-1, M-1);
	    } else {
	        dp[N][M] = Math.max(lcs(s1, s2, N-1, M), lcs(s1, s2, N, M-1));
	    }
	    return dp[N][M];
	}
}
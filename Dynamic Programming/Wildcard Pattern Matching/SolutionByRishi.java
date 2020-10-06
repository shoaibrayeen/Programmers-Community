class Solution {
    public boolean isMatch(String s, String p) {
        boolean[][] strg = new boolean[s.length()+1][p.length()+1];
		
		strg[s.length()][p.length()] = true;
		
		for(int sidx = s.length(); sidx>=0; sidx--) {
			
			for(int pidx = p.length()-1; pidx>=0; pidx--) {
				
				if(sidx == s.length()) {
					strg[sidx][pidx] = strg[sidx][pidx+1] && p.charAt(pidx) == '*';
				}else {
					
					char schar = s.charAt(sidx);
					char pchar = p.charAt(pidx);
					
					boolean ans;
					
					if(schar == pchar || pchar == '?')
						ans = strg[sidx+1][pidx+1];
					else if(pchar == '*')
						ans = strg[sidx][pidx+1] || strg[sidx+1][pidx];
					else
						ans = false;
					
					strg[sidx][pidx] = ans;
					
				}
				
			}
		}
		
		return strg[0][0];
    }
}

# Redifined LCS to obtain highest sum ASCII LCS
def lcs(X , Y):
    # find the length of the strings
    m = len(X)
    n = len(Y)

    # declaring the array for storing the dp values
    L = [[None]*(n+1) for i in range(m+1)]

    """Following steps build L[m+1][n+1] in bottom up fashion
    Note: L[i][j] contains maximum ascii sum of LCS of X[0..i-1]
    and Y[0..j-1]"""
    for i in range(m+1):
        for j in range(n+1):
            
            # Base case
            if i == 0 or j == 0 :
                L[i][j] = 0
            
            # If two characters are matching then
            # The formed LCS can have heigst sum
            # Or We have previously obtained the 
            # Heigest sum of ascii characters
            # We need the max only
            elif X[i-1] == Y[j-1]:
                L[i][j] = max(L[i-1][j-1]+ord(X[i-1]), L[i-1][j] , L[i][j-1])
            
            # Else get the max without the character
            else:
                L[i][j] = max(L[i-1][j] , L[i][j-1])
    return L[m][n]


if __name__ == "__main__":
    s1 = "aaabbbccc"
    s2 = "abcabcabc"
    print(lcs(s1, s2), ord('a') + ord('b') + ord('c') * 3)
'''
Description : Wildcard pattern matching
Function that matches input strr with given wildcard pattern
'''


def strrmatch(strr, pattern, n, m):

	if (m == 0):
		return (n == 0)

	lookup = [[False for i in range(m + 1)] for j in range(n + 1)]

	lookup[0][0] = True

	for j in range(1, m + 1):
		if (pattern[j - 1] == '*'):
			lookup[0][j] = lookup[0][j - 1]
      
	for i in range(1, n + 1):
		for j in range(1, m + 1):

			if (pattern[j - 1] == '*'):
				lookup[i][j] = lookup[i][j - 1] or lookup[i - 1][j]

			elif (pattern[j - 1] == '?' or strr[i - 1] == pattern[j - 1]):
				lookup[i][j] = lookup[i - 1][j - 1]
        
			else:
				lookup[i][j] = False

	return lookup[n][m]

# Main code

strr=input()
pattern = input()
# strr = "baaabab"
# pattern = "*****ba*****ab"
# char pattern[] = "ba*****ab"
# char pattern[] = "ba*ab"
# char pattern[] = "a*ab"
# char pattern[] = "a*****ab"
# char pattern[] = "*a*****ab"
# char pattern[] = "ba*ab****"
# char pattern[] = "****"
# char pattern[] = "*"
# char pattern[] = "aa?ab"
# char pattern[] = "b*b"
# char pattern[] = "a*a"
# char pattern[] = "baaabab"
# char pattern[] = "?baaabab"
# char pattern[] = "*baaaba*"

if (strrmatch(strr, pattern, len(strr), len(pattern))):
	print("Yes")
else:
	print("No")

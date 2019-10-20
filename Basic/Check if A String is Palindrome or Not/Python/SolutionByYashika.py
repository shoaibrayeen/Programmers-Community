def Palindrome(string):
    size=len(string) # calculating the size of the string
    if size<=1:
        return True # returns True as a string of length one is it's own palidrome
    
    if string[0]!=string[size-1]:
        return False # returns False if first and last alphabet of string does'nt match
    
    return Palindrome(string[1:-1])  #starting from first alphabet , go till the end and check recursively


from sys import setrecursionlimit
setrecursionlimit(11000)
string=input()
if Palindrome(string):
    print('Palindrome')
else:
    print('Not a Palindrome')
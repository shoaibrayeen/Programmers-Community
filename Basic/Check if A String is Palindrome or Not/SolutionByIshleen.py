# program checks if the string is palindrome or not.

def function(string):
    if(string == string[:: - 1]):
        print("This is a Palindrome String")
    else:
        print("This is Not a Palindrome String")
        
string = input("Please enter your own String : ")
function(string)

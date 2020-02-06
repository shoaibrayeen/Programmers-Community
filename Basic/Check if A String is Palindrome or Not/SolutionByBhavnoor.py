def reverse(string):
    string = "".join(reversed(string))
    return string


def Pali(s):
    # Calling reverse function
    revstr = reverse(s)

    # Checking if both string are equal or not
    if (s == revstr):
        return True
    return False

s = input("Enter a String:")
ans = Pali(s)

if ans == True:
    print("Yes",s,"is a Palindrome String")
else:
    print("No",s,"is not a Palindrome String")

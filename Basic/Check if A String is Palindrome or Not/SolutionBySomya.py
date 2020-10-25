#Program to check whether string is palindrome or not
def palin(str):
       n = len(str)
       for i in range(0, int(n/2)):
           if str[i] != str[n-i-1]:
               return False
           else:
               return True

str = input("Enter String: ")
print("Palindrome:", palin(str))

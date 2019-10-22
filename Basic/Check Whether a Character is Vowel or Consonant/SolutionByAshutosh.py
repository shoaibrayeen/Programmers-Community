#Program to Check whether a character is vowel or consonent
n=input() #Taking th character from the user
#defining the function
def vowel(n):
    #Checking the character is in list of vowels or not
    if n in ["a","e","i","o","u","A","E","I","O","U"]:
        print("Output = Vowel")
    else:
        print("Output = Consonent")
#Calling the function
vowel(n)

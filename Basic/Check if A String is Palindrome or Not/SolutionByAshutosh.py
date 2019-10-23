# Program to Check if a String is Palindrome or Not
a = input()#User Input the String
temp=""#Temporary Variable
for i in range(len(a)-1, -1, -1): #for loop to iterate string
    temp = temp + a[i] #concatinating sliced string
if(temp == a): #Comparing both the strings
    print("YES")
else:
    print("NO")

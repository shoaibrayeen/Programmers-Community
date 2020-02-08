#Program to check if a string is palindrome or not

word=input()   #Taking input as a string

if word == word[::-1]:   # Checking if reverse of word is same as word
  print("YES")      #Printing the result
  
else:
  print("NO")       #Printing the result

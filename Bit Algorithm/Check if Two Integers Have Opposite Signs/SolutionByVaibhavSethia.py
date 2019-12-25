#Program to check if two integers have opposite sign  or not

a,b= map(int,input().split(" ")) #Taking two input together ,coverting from string to int and mapping to a and b

if a*b<0:   #Product of two numbers having opposite signs is always negative
  print("Yes")

else:
  print("No")

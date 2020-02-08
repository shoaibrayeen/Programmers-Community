#Program to check whether a given number is Even or Odd

N=int(input())  #Taking integer as input

if N>0:   #Checking for positive input
  rem=N   #Intialising remainder variable to 0
  while rem>=0:
    rem=rem-2  #Finding remainder
    
    if rem==1 or N==1:  
      print("ODD")#Printing result
      break
    elif rem==0:
      print("EVEN") #Printing result
      break

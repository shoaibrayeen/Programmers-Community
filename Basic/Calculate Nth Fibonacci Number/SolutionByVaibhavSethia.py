#Program to count number of 1's in binary

n=int(input())
if n>=0:             #Checking for positive input
  binary_num="{0:b}".format(n)   #Formatting input in binary as string
  count=0

  for bit in binary_num:
    if int(bit):      #Searching for 1's
      count+=1        #Incrementing the counter
  print(count)

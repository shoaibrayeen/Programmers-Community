#Program to find non-repeated element

arr=list(map(int, input().split(', ')))  #Input various integers in arr list

if 1< len(arr) <= 10**6:   #Checking array length
  
    for i in arr:      #Taking element from arr
      
      if 0 < i <= 10**9:   #Checking element value
        
        if arr.count(i) ==1:   #Checking the number the number is unique
          
          print(i)   #Printing element

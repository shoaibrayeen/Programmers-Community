def firstNR(arr, n): 
  
	for i in range(n): 
		j = 0
		while(j < n): 
			if (i != j and arr[i] == arr[j]): 
				break
			j += 1
		if (j == n): 
			return arr[i] 
	
	return -1
	
# Driver code
n=input('Enter size : ')
arr=[]
for i in range(0,n):
  arr.append(input('enter element'))
print(firstNR(arr, n))

n = int(input ("Enter the number of values:"))
i=0
a=[]
while(i<n):
    input_n = int(input ("Enter the values:"))
    a.append(input_n) 
    i= i+1

print("The entered list is :",a)
n = len(a)
print("The length of list is :",n)




     



n = len(a)
print(n)



def swap(a,i,j):
    temp = a[i]
    a[i] = a[j]
    a[j] = temp
     
low = 0      
high = n-1
value = 0
    
while(value<=high):         # Here we have'nt done low<=high because low will not be incremented in case all the 1's come in the middle
                            # but will be incremented in every case. even if the 1 is encountered .so, we do value<=high and not.... low<=high 
                            # and in that case the swapping would stop and 
    if(a[value] == 0):
        swap(a,low,value)
        value = value +1
        low = low+1
        print(a)
        
        
    elif(a[value] == 1):
        value = value+1
        print(a)
         
         
    elif(a[value] == 2):
        swap(a,high,value)
        high = high-1      # Here we haven't incremented value i.e value=value+1 , due to the reason the value swapped with 2 may be 0 and we need to check that 0 too and put it in the beginning
        print(a)
         
print("The resulting segregated list is:",a)

n=int(input("Enter the number of values in the list:"))
 
i=0
a=[]
while(i<n):
    input_n = int(input("Enter the value:"))
    a.append(input_n) 
    i=i+1
    
    
# a= [0,1,0,1,1,0,0,1]
# n=len(a)
low = 0
high = n-1
value =0



def swap(a,i,j):
    temp = a[i]
    a[i] = a[j]
    a[j] = temp
    
while(low<=high):
    
    if(a[value] == 0):
        swap(a,low,value)
        low =low+1
        value = value+1
        print(a)
        
    elif(a[value] == 1):
        swap(a,high,value)
        high =high-1        # Here we have'nt done 
        print(a)
        
print(a)

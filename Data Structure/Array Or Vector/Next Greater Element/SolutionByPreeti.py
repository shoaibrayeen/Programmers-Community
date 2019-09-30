t = int(input())
def NextGenerator(arr):
    for i in range(0, len(arr), 1): 
  
        next = -1
        for j in range(i+1, len(arr), 1): 
            if arr[i] < arr[j]: 
                next = arr[j] 
                break
        print(str(arr[i]) + " -- " + str(next))       
arr = [4,5,2,25] 
NextGenerator(arr)        
        

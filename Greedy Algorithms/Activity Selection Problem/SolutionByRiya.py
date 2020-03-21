# function to sort activities accoring to finish time
def ssort(s,f):
    for i in range(len(f)): 
        min_key= i 
        for j in range(i+1, len(f)): 
            if f[min_key] > f[j]: 
                min_key = j                      
        f[i], f[min_key] = f[min_key], f[i]
        s[i], s[min_key] = s[min_key], s[i]
  
# function to select activities and print them
def selectAndPrint(s,f):
    ssort(s,f) # to sort the activities according to their finish time    
    print("Activities to be selected are:")
    i=0
    print (s[i],f[i])
    counter=1
    for j in range(len(f)): 
        if s[j] >= f[i]:
            counter+=1
            print (s[j], f[j])
            i = j 
    print("#of activities selected are:", counter)
            
# Driver program to test above function 
if __name__=="__main__":
    n=int(input("Enter the number of activities:"))
    print("Now enter the start time of the activities:")
    s=[]
    for i in range(0,n):
        stime=int(input())
        s.append(stime) 
    
    print("Please enter the finish time of the activities:")
    f=[]
    for i in range(0,n):
        ftime=int(input())
        f.append(ftime)
    selectAndPrint(s,f)

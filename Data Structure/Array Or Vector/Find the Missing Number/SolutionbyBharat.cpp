n=int(input())

arr=[int(i) for i in input().split()]

a=1e9                      #a  indicate minimum element
an=-1e9                    #an  indicate maximum element

for i in arr:
    a=min(a,i)
    an=max(an,i)


n1=(an-a+1)
Sn=int((n1*(a+an))/2)

if Sn-sum(arr)==0:
    if a==1:
        print(an+1)
    else:
        print(a-1)
else:            
    print(abs(Sn-sum(arr)))    

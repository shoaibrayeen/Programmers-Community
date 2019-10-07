def check2power(num):   
    rem = 0;
    a = [] ;
    temp=0;
    while(num!=0):
        rem = num%2;
        print("remainder is :",rem,end="\n")

        num = num/2;
        num=int(num)
        print("new number is :",num,end="\n")


        a.append(int(rem))
        print("a is: ",a,end="\n")
        temp=temp+1;
        
    return a
    
original = float(input("Enter a number"))
z= check2power(original)
print(z)


# First check if the last number is 1 and all the other elements except the last element are zero....

power=0
if(z[-1] == 1):
    for i in range(len(z)-1):
        if(z[i] == 0):
            flag=1
            power=power+1
        else:
            flag=0
            break
else:
    flag=0
    
if(flag==0):
    print("Number :=",original,"is not a power of 2 ")
else:
    print("Number :=",original,"is a power of 2 and power is",power)

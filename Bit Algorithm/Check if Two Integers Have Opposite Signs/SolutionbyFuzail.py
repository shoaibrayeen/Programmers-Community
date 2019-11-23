def type_of_number(x,y):
    if ((x == 0) or (y== 0)):
        print ("Enter a non zero number")
    elif ( x * y < 0) :
        print("negetive")
    else :
        print ("positive")
        
f=int(input("enter first integer"))
g=int(input("enter second integer"))

type_of_number(f,g)

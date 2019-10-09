# Algorithm :-
# 1.) start from 1 and go till n number
# OR
# 2.) start from n and end till

input_n = int(input("Enter the number: "))
result = 1
if(input_n>0):
    for i in range(1,input_n+1):
        print(i)
        result = result * i
    #     print(result)

    print("The factorial of a number is:",result)
else:
    print("Number entered is negative")

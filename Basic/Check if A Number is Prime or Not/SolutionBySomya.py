#Check if the number is prime or not
def prime(n):
    if n>1:
        for i in range(2, n):
            if(n%i) == 0:
                print(n," is not a prime number")
                break
        else:
            print(n, " is a prime number")
    else:
        print(n," is neither prime nor composite")

n = int(input("Enter number: "))
prime(n)

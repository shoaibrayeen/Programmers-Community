def check(a):
    if a==a[::-1]:
        print( "string is palindrome")
    else:
        print( "string is not palinrome")


d=input("enter your string:")

check(d)

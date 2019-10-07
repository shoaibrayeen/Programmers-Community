def check(str):
    if str == str[::-1]:
        print( "Yes")
    else:
        print( "No")


str = input("Enter your string\t:\t")

check(str)

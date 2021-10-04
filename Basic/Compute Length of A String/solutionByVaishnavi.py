def length_count(str):
    counter = 0
    for c in str: 
        counter += 1
    return counter

str = input("Enter the string:- ")
print(length_count(str))

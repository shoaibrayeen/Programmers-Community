str = input("Enter the string: ")
def countLength(str):
    counter = 0
    for c in str: 
        counter += 1
    return counter


print(countLength(str))

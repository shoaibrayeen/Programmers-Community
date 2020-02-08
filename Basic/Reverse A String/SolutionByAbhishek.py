# Function to reverse string using for loop
def reverseUsingForLoop(s):
    s1 = ''
    for r in s:
        s1 = r + s1  # appending chars in reverse order
    return s1

# Taking input from user
s = input("Enter a string: ")
print(reverseUsingForLoop(s))

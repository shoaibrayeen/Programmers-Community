def reverse(n):
    str_n=str(n)
    return int(str_n[::-1])

n=int(input("Enter number to be reversed:"))
print(reverse(n))

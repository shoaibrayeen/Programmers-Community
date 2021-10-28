def sum_of_digits(num):
    sum=0
    for i in num:
        sum+=int(i)
    return sum

num = input("Enter a positive integer:")
print("The sum of its digits is:",sum_of_digits(num))

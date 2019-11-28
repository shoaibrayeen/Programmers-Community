# program to check its a leap year or not.


def function(year):
    # Leap Year Check
    if year % 4 == 0 and year % 100 != 0:
        print(year, "is a Leap Year")
    elif year % 400 ==0:
        print(year, "is a Leap Year")
    else:
        print(year, "is not a Leap Year")


# User enters the year
year = int(input("Enter Year: "))
function(year)

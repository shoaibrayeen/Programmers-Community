def factorial(number):
  """
  Factorial of a number using recursion in python.
  Recursion is a method of programming, in which a 
  function calls itself one or more times in its body.
  """
  if number < 1:
      return "Factorial cannot be found for negavtive number"
  elif number == 0 or number == 1:
      return 1
  else:
      return number * factorial(number - 1)


# Taking input from the user
number = int(input("Enter any non negative number: "))
print(factorial(number))

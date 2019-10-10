def factorial(number):
  """
  Factorial of a number using recursion in python
  """
  if number < 1:
      return "Factorial cannot be found for negavtive number"
  elif number == 0 or number == 1:
      return 1
  else:
      return number * factorial(number - 1)


number = factorial(8)
print(number)

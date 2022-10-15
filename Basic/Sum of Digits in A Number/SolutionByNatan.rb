def sum_digits (number)
  sum = 0
  for i in 0..(number.length-1) do
    sum = sum + number[i].to_i
  end
  return sum
end

# Take a number from the user as input and return sum of all digits
print("Input a number: ")
number = gets.chomp

puts sum_digits(number)

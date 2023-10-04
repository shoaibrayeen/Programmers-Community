def get_power (base = 0, n = 1)  
  if n == 0
    return 1
  elsif ((n%2)==0)
    return get_power(base*base, n/2)
  else
    return base*get_power(base*base, n/2)
  end

end

# Take a number and the exponent value from the user as input and output the the result of expression (number^n)
print("Base: ")
base = gets.chomp.to_i
print("Power: ")
power = gets.chomp.to_i
n = power
if power<0
  n = -1*power
end

result = get_power(base, n)

if power<0
  result = 1.0/result
end
print("The result of " + base.to_s + "^" + power.to_s + " is "+ result.to_s + "\n")

def n_bonacci (n, m)
  array_bonacci = Array.new(m, 0)

  array_bonacci[n - 1] = 1
  array_bonacci[n] = 1

  for i in (n+1)..(m-1)
    array_bonacci[i] = 2 * array_bonacci[i - 1] - array_bonacci[i - n - 1]
  end

  for i in 0..(m-1)
    if i<(m-1)
      print(array_bonacci[i].to_s + ", ")
    else
      print(array_bonacci[i].to_s)
    end
  end
end

def check_range_number (n)
 if n <= 1 || n> 10**6
   print("Oh, invalid range!\n")
   exit
 end
end

### Main
print("Enter value of N: ")
n = gets.chomp.to_i
check_range_number(n)

print("Enter value of M: ")
m = gets.chomp.to_i
check_range_number(m)

print("N-bonacci: ")
n_bonacci(n, m)
print("\n")
###

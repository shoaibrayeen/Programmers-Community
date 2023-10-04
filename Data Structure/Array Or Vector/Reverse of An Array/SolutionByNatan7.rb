# Take elements number of array and array elements
print("Enter size of array:")
number = gets.chomp.to_i

if number <= 1 || number> 10**6
  print("Oh, invalid range!\n")
  exit
end

array = []
print("Now, enter each element of array:")
i = 1
while i<=number do
  element = gets.chomp.to_i
  if element <= 0 || element> 10**9
    print("Oh, invalid range of element!\nTry again!\n")
  else
   array.push(element)
   i=i+1
  end
end

print("Array:" + array.to_s + "\n")
print("Reverse array:" + array.reverse().to_s + "\n")

def get_next_greater (index, array)
  next_greater = array[index].to_i
  index = index + 1
  
  if index >= array.size
    return -1
  end
  
  for i in index..(array.size-1)
    if next_greater < array[i].to_i
      return array[i].to_i
    end
  end
  
  return -1
end

def next_greaters_element (array)
  array_greaters = []
  
  for i in 0..(array.size-1)
    next_greater = array[i]
    array_greaters.push(get_next_greater(i, array))
  end
  
  return array_greaters
end

# Take elements number of array and array elements
print("Enter size of array: ")
number = gets.chomp.to_i

if number <= 1 || number> 10**6
  print("Oh, invalid range!\n")
  exit
end

array = []
print("Now, enter each element of array:\n")
i = 1
while i<=number do
  element = gets.chomp.to_i
  if element <= 0 || element > 10**9
    print("Oh, invalid range of element!\nTry again!\n")
  else
   array.push(element)
   i=i+1
  end
end

print("Array:" + array.to_s + "\n")
print("Next greaters elements array:" + next_greaters_element(array).to_s + "\n")

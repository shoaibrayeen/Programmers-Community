def reverse (word)
  return reversed_word = word.reverse
end

# Take a word from the user as input and your output is 'Yes' if is palindrome word or 'NO' if not
print("Enter a word: ")
word = gets.chomp

print(reverse(word) + "\n")

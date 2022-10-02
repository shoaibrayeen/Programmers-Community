def is_palindrome (word)
  reversed_word = word.reverse

  if (word == reversed_word)
    return "YES"   
  end
  return "NO"

end

# Take a word from the user as input and your output is 'Yes' if is palindrome word or 'NO' if not
print("Enter a word: ")
word = gets.chomp

print(is_palindrome(word) + "\n")

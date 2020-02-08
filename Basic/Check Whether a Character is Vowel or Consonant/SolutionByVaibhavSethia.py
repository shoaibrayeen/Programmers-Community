vowel=('a','e','i','o','u','A','E','I','O','U')  #Creating a tuple of vowels

word=input()   #Taking input character and assigning to word variable

if word in vowel:   #Checking if word is vowel
  print('Vowel')    #If yes print Vowel
  
else:
  print('Consonant') #If not print Consonant

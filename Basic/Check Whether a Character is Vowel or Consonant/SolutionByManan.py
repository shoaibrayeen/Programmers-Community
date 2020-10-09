# Function to check if a character is a vowel or a consonant
def checkVowelOrConsonant(ch):
	if (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'):
		print("The character entered is Vowel")
	else:
		print("The character entered is a constant")

ch = input("Enter a Character to check if it is a vowel or not: ")
ch1 = ch.lower()
checkVowelOrConsonant(ch1)
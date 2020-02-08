'''
    Program Description : Program to Check Whether a Character is Vowel or Consonant.
'''

def check_vowel_consonant(char):
    vowel = ['A','E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']

    if char in vowel:
        print('Output = Vowel')
    
    else:
        print('Output = Consonant')

print("Enter any Character :")
char = input()
check_vowel_consonant(char)

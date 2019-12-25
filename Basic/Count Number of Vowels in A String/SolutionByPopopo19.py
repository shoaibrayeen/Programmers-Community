'''
    Program Description: Count the number of vowels in a string
'''

def count_vowels(string):
    
    amount = 0
    
    for i in range(len(string)):
        
        if string[i] in 'AEIOUaeiou':
            amount += 1

    return amount

string = input("Enter string\t\t:\t")
print("\nNumber of Vowels\t:\t" , count_vowels(string))

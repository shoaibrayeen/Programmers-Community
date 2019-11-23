def check_vowel(char):
    '''
       Objective    : To Check Whether A Character Is A Consonant Or A Vowel
       
       Input        : A Character - Str Object
       
       Return Value : String - 'Vowel' Or 'Consonant'
    '''
    if char.isupper():
        if char in ['A','E','I','O','U']:
            return 'Vowel'
        else:
            return 'Consonant'
    elif char.islower():
        if char in ['a','e','i','o','u']:
            return 'Vowel'
        else:
            return 'Consonant'
    else:
        print('You Have Entered Something Wrong')
        
val = input('Enter Any Character : ')
check_vowel(val)

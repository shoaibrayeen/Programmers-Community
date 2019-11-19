def rev_string(strng):
    '''
       Objective    : To Reverse A Given String
       
       Input        : A String - Str Object
       
       Return Value : A Reversed String - Str Object
    '''
    
    rev_str = ''
    
    for i in range(len(strng)-1,-1,-1):
        rev_str+=strng[i]
        
    return rev_str
    
inp = input('Enter Any String : ')
rev_string(inp)

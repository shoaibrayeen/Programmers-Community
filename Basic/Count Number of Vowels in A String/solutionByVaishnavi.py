def vowels_count(string):
    
    count = 0
    
    for i in range(len(string)):
        
        if string[i] in 'AEIOUaeiou':
            count += 1

    return count

string = input("Enter string:-")
print("Number of Vowels:- " , vowels_count(string))

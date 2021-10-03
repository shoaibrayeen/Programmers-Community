import random
import math

def verify (num1,num2):
    if num1 > num2:
        output = 1
    elif num1 < num2:
        output = -1
    else:
        output = 0
    return output

maxNum = 1000000
selNum = random.randint(1,maxNum)

output = maxNum/2
temp = output

for loop in range (1,50):
    ver = verify(output,selNum)
    
    if temp < 2:
        temp = temp * 2
    else:
        temp = temp / 2
    temp = math.ceil(temp)
        
    if ver == 1:
        output = output - temp
        
    elif ver == -1:
        output = output + temp
        
    elif loop > 50:
        print ("Gueeses over 50 the correct number is = ",selNum)
        
    else:
        print ("Guessed number = ",output,"and random generated number (Selected Number) = ",selNum," and guesses made = ",loop)
        break
    

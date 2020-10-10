def String_With_Digits():
    ##Taking input a String
    i=0
    string=input('Enter the String:')
    for element in string:
        if element not in '0123456789':
                    i+=1
    if i>0:
        print('String contains other Character!')
    else:
        print('String contains Digit Only!')
        

##Calling the function
String_With_Digits()

def reverse(string): 
    string = "".join(reversed(string))  #used reversed function for reversing the String 
    return string 
  
str = "ProgrammersCommunity"
  
print ("The Entered String  is : ",end="") #end is used here so that output will be in same line.
print (str) 
  
print ("The Reversed String is : ",end="") 
print (reverse(str)) 

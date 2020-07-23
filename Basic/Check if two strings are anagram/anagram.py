def anagram(s1,s2):
  return sorted(s1)==sorted(s2)
  
a="ababa" #string 1
b="ababa" #string 2

print(anagram(a,b))
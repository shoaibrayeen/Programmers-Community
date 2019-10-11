'''
Problem Statement:-Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

Time Complexity: O(n)
Space Complexity: O(n)

'''

n=int(input())

arr=[int(i) for i in input().split()]
greater_element=[int(-1) for i in range(n)]


i=len(arr)-2

while i>=0:
    if arr[i]<arr[i+1]:
        greater_element[i]=arr[i+1]
    elif arr[i]<greater_element[i+1]:
        greater_element[i]=greater_element[i+1]

    i-=1


print("Element"+"  "+"NGE")

for i in range(n):
    print(arr[i],"--->",greater_element[i])

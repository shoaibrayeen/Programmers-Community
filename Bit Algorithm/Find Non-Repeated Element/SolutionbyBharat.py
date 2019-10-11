'''
Problem Statement:-An Array is given and every element is appearing twice except one element. You need to find that element.

Time_complexity:O(n)
Space_complexity:O(1)

'''

n=int(input())

arr=[int(i) for i in input().split()]


unique_element=0

for i in arr:
    unique_element^=i


print("unique_element is"," ",unique_element)    
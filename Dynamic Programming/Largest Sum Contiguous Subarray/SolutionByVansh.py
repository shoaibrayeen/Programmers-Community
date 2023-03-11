''' Given an integer array of size n. Write a program to return the maximum subarray sum 
Ex = [4,2,21,11,-2]
ans = 38
'''
import math

def maximumSubarraySum(nums):
  ans =  0 
  maximum_so_far = -math.inf
  
  for i in range(len(nums)):
    ans += nums[i]
    if ans < nums[i]:
      ans = nums[i]
    if maximum_so_far < ans:
      maximum_so_far = ans
  return maximum_so_far


n = int(input())
nums = []
for i in range(n):
  nums.append(int(input()))
print(maximumSubarraySum(nums))

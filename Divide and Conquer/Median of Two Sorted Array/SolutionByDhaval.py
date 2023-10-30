import statistics

len1 = int(input())
arr1 = list(map(int, input().split(" ")))
len2 = int(input())
arr2 = list(map(int, input().split(" ")))

arr = arr1 + arr2
arr.sort()

print(statistics.median(arr))

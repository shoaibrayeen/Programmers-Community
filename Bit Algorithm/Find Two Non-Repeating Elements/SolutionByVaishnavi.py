'''
Program implemented to find two non - repeating elements
'''
def find_element(arr):
    if len(arr) <= 1:
        print()
    if len(arr) > 1:
        for i in arr:
            if arr.count(i) == 1:
                print(i)
            pass
n = int(input())
arr = list(int(i) for i in input().strip().split())
find_element(arr)

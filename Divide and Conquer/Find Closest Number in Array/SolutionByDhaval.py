arr_in = input()[9:]
arr_in = arr_in[:-1]

arr_in = arr_in.replace(" ", "")
arr = list(map(int, arr_in.split(",")))

target_num = input().replace(" ", "")
num = int(target_num.split("=")[1])

smallest_diff = abs(arr[0]-num)
closest_num = 0

for index in arr:
    diff = abs(index-num)
    if diff < smallest_diff:
        smallest_diff = diff
        closest_num = index

print(closest_num)

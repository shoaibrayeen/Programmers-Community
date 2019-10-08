# Kth smallest value

if __name__ == "__main__":
    size=int(input())
    arr = []
    for _ in range(size):
        x = int(input())
        arr.append(x)

    k = int(input("Enter k: "))
    arr = sorted(arr)
    print("After Sorting: ")
    for val in range(size):
        print(arr[val])
    print("kth smallest value:", arr[k-1
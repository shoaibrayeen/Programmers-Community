int = int(input())


def checkPowerOfTwo(num):
    power = 0
    isPower = "No"

    while power <= int:
        if 2 ** power == int:
            isPower = "Yes"
            break
        else:
            power += 1

    return isPower


print(checkPowerOfTwo(int))

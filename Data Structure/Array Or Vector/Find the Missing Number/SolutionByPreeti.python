def bit_at(n, bit):
    return (n>>bit) & 1
def find_missing(a, bits):

    indexes = range(len(a))
    missing = 0

    for bit in range(bits):

        ones = [i for i in indexes if bit_at(a[i], bit)==1]
        zeroes = [i for i in indexes if bit_at(a[i], bit)==0]

        if len(ones) <= len(zeroes):
            indexes = ones
            missing |= (1<<bit) 
        else:
            indexes = zeroes

    return missing
find_missing([7,2,6,4,1,5,0], 3)

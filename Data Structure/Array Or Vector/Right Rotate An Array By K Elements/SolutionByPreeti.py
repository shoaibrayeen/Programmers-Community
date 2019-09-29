def rotateRight( a,  k):
    a  = [8,9,10,7,33]
    length = a.len()
    reverse(a, 0, len(a) -1)
    reverse(a, 0, k-1)
    reverse(1, k, n-1)
def reverse( a,  start,  end):
    while(start < end):
        swap(a, start, end)
        start = start+1
        end = end-1
def swap(a, pos1, pos2):
    temp = a[pos1]
    a[pos1]= a[pos2]
    a[pos2] = temp
    

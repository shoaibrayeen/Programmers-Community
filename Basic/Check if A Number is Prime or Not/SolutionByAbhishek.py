a=int(input())
def prime(n):
    for i in range (2,a):
        if a%i==0:
            print('not Prime')
            break
    else:
            print('Prime')

prime(a)

#To find factors of given numbers using for loop
def FactorOfNo(num):
    if num <= 0:
        print('Number Not accepted')
    else:
        for i in range(1,num+1):
            if num%i==0:
                print(i,end=' ')
num = int(input('N= '))
FactorOfNo(num)

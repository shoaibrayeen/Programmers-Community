# To display factors of given number using while loop
def FactorsOfNo(num):
    i = 1
    if num<0:
        print('Not accepted')
    else:
        while i<=num:
            if num%i==0:
                print(i,end=' ')
            i += 1
num = int(input('N= '))
FactorsOfNo(num)

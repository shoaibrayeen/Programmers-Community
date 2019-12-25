#To check entered year is leap or not
year = int(input('YEAR= '))
if year%4==0 and year%100!=0:
    print('YES')
elif year%100==0 and year%400==0:
    print('YES')
elif year%400==0:
    print('YES')
else:
    print('NO')

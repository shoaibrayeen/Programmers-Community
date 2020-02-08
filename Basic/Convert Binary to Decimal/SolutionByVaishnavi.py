#to convert binary to decimal
BinaryNo = int(input('Binary No= '))
rev = 0
decimal = 0
i = 0


while BinaryNo>0:
    rev = BinaryNo % 10
    decimal = decimal + rev * pow(2,i)
    BinaryNo = BinaryNo // 10
    i = i + 1
print('Decimal No= ',decimal)

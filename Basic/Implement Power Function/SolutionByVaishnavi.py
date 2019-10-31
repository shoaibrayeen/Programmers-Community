
'''
Implement power function without using power operator
'''

def Power(a,b):
    if b==0:     
        print(1)

    #for positive base value
    if a>0:
        p = a
       
       #for positive power
        if b>0:
            for i in range(b-1):
                a *= p 
            print(a)
       
       #for negative power
        elif b<0:
            b = -b
            for i in range(b-1):
                a *= p
            print(1/a)
   
   #for negative base values
    else:
        p = -a
        a = p
       
       #for positive power
        if b>0:
            if b%2==0:
                for i in range(b-1):
                    a *= p 
                print(a)
            elif b%2!=0:
                for i in range(b-1):
                    a *= p
                print(-a)
       
       #for negative power
        elif b<0:
            b = -b
            if b%2==0:
                for i in range(b-1):
                    a *= p 
                print(1/a)
            elif b%2!=0:
                for i in range(b-1):
                        a *= p
                print(1/-a)
        
x = int(input('Base= '))
y = int(input('Power= '))
Power(x,y)

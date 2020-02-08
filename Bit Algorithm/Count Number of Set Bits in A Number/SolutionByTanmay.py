def counSetBits(num):
    '''
       Objective :  To Count The Number Of Set Bits In Binary Representation Of A Given Number
       
       Input     : A Decimal Number - Numeric Value
       
       Return    : No. Of Set Bits - Numeric Value
       
    '''
    if num == 0:
        return 0, 0
    st = ""
    while num!=1:
        if num%2==0:
            r = num%2
            num = (num+r)//2
            st+=str(r)
        else:
            r = num%2
            num = ((num + r)//2 - 1)
            st+=str(r)
    st += str(num)
    st = st[::-1]
    return st,st.count('1')

def main():
    '''
       Objective :  To Count The Number Of Set Bits In Binary Representation Of A Number Input By The User
       
       Input     : None
       
       Return    : None
       
    '''
    num = int(input("Enter Any Postive Decimal Number : "))
    no , result = counSetBits(num)
    print("Binary Representation : ",no,"\nNo. Of Set Bits : " ,result)
    
if __name__=="__main__":
    main()

public void reverseString(char[] s) {
        int fi = 0;
        int bi = s.length-1;
        char temp = '0';
        while(fi <= bi){
            temp = s[fi];
            s[fi] = s[bi];
            s[bi] = temp;
            fi++;
            bi--;
        }
    }

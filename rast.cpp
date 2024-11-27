string rast(int a) {
        a = abs(a);
        string s; s="";
        for(int i = 0; a != 0; i++) {
            s+= char(a%10 + '0'); a/=10;
        }
        return s;
    }
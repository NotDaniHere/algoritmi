unsigned long long fectorial(int a) {
    unsigned long long fact = 1;
    for(int i = 1; i <= a; i++) {
            fact*=i;
        }
        return fact;
    }
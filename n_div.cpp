int n_div(int a) {
    a = abs(a);
    short numar_div = 0;
    for(int i = 1; i <= a; i++) {
        if(a%i) continue;
        else numar_div++;
    }
    return numar_div;
}
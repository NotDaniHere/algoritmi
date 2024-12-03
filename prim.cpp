#include <bits/stdc++.h>
using namespace std;
int main() {
    int a; bool c = true; cout << "a="; cin >> a;
    a  = abs(a);
    for(int i = 2; i < sqrt(a); i++) {
        if(!(a%i)) c = false;
        else continue;
    }
    if(c && a != 0 && a!=1) cout << "Numarul este prim"; 
    else cout << "Numarul nu este prim";
    return 0;
}
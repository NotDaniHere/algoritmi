#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, rast, a1 = 0; cout << "a="; cin >> a; a=abs(a);
    a1 = a;
    rast = 0;
    while(a) {
        rast = rast*10 + a%10;
        a/=10;
    }
    cout << rast;
    return 0;
}
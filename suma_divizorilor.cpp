#include <bits/stdc++.h>
using namespace std;
int main() {
    int a; cout << "a= "; cin >> a;
    a=abs(a);
    int suma = 0;
    for(int i = 1; i<=a; i++) {
        if(!a%i) suma+=i;
    }
    cout << "Numarul de divizori =" << suma << endl;
    return 0;
}

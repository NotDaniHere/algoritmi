#include <bits/stdc++.h>
using namespace std;
int main() {
    int a; cout << "a= "; cin >> a;
    a=abs(a);
    int numar_divizori = 0;
    for(int i = 1; i<=a; i++) {
        if(a%i == 0) numar_divizori++;
    }
    cout << "Numarul de divizori =" << numar_divizori << endl;
    return 0;
}

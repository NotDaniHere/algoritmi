#include <bits/stdc++.h>
using namespace std;
int main() {
    int a; cout << "a= "; cin >> a;
    unsigned long long factorial = 1;
    a = abs(a);
    if(a<=20) {
        for(int i = 1; i<=a; i++) {
            factorial*=i;
        }
        cout << "Factorial de numar este" << factorial;
    } else {
        cout << "Factorialul este un numar foarte mare" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, a1, b1; 
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    a1 = a; b1 = b;
    a = abs(a); b = abs(b);
    unsigned int r;
    if(b!=0) r = a%b;
    while(r) {a=b; b=r; r=a%b;}
    cout << "cmmmc=" << (a1*b1)/b << endl;
    return 0;
}

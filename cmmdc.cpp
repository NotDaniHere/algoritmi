#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b; 
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    a = abs(a); b = abs(b);
    unsigned int r;
    if(b!=0) r = a%b;
    while(r) {a=b; b=r; r=a%b;}
    cout << "cmmdc=" << b << endl;
    return 0;
}

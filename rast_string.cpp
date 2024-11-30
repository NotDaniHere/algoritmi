#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = ""; int a; cout << "a= "; cin >> a;
    a=abs(a);
    for(int i = 0; a!=0; i++) {
        s+=char(a%10 + '0'); a/=10;
    }
    cout << s;
    return 0;
}
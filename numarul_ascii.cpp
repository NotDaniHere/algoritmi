#include <bits/stdc++.h>
using namespace std;

int main() {
    char c; cout << "c= "; cin >> c;

    cout << "Numarul de ordin al lui c in tabelul ASCII " <<int(c) << endl;
    cout << "Predecesorul lui c: " << char(int(c)-1) << endl;
    cout << "Succesorul lui c: " << char(int(c)+1) << endl;

    return 0;
}
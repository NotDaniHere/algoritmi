#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "-9001";
    //alternativ, stoi(s) returneaza un int cu valoarea stringului.
    int numaru = 0; int cycle = 0;
    while(s.size() != 0) {
        if(s[s.size()-1] == '-') {
            numaru -= 2*numaru;
            break;
        }
        numaru += (int(s[s.size()-1]) - int('0')) * pow(10, cycle);
        s.erase(s.size()-1);
        cycle++;
    }
    cout << numaru << endl;
    return 0;
}

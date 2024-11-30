#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "1001";
    int numaru = 0; int cycle = 0;
    while(s.size() != 0) {
        numaru += (int(s[s.size()-1]) - int('0')) * pow(10, cycle);
        s.erase(s.size()-1);
        cycle++;
    }
    cout << numaru << endl;
    return 0;
}
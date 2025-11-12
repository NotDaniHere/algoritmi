//MENIT SA INLOCUIASCA toBaseTen si fromBaseTen
#include <bits/stdc++.h>
using namespace std;
string convertBaza(string number, int from, int to) {
    int dotPos = number.find('.', 0); double x = 0;
    if(dotPos >= number.size()) dotPos = number.size();
    for(int i = dotPos-1; i >= 0; i--) {
        int digitValue;
        if(number[i]-'0' >= 0 && number[i]-'0' <= 9) {
            digitValue = number[i]-'0';
        } else {
            digitValue = number[i]-'A' + 10;
        }
        int exponent = dotPos - 1 - i;
        x += digitValue * pow(from, exponent);
    }
    for(int i = dotPos+1; i < number.size(); i++) {
        int digitValue;
        if(number[i]-'0' >= 0 && number[i]-'0' <= 9) {
            digitValue = number[i]-'0';
        } else {
            digitValue = number[i]-'A' + 10;
        }
        int exponent = dotPos - i;
        x += digitValue * pow(from, exponent);
    }
    int intreg = trunc(x); string output = "";
    while (intreg) {
        if(intreg%to <= 9) {
            output=char(intreg%to+'0')+output; intreg/=to;
        } else {
            output=char(intreg%to-10+'A')+output; intreg/=to;
        }
    }
    output+='.'; x = x-intreg;
    for(int i=1; i<=16; i++) { 
        x*=to; intreg=trunc(x);
        if(intreg%to <= 9) {
            output+=char(intreg%to+'0');
        } else {
            output+=char(intreg%to+'A');
        }
        x=x-trunc(x);
    }
    while (output[output.size()-1]=='0') output.erase((output.size()-1),1);
	if (output[output.size()-1]=='.') output.erase(output.size()-1,1);
    return output;
}
int main() {
    //example
    cout << convertBaza("1000111", 2, 16) << '\n';
    return 0; 
}
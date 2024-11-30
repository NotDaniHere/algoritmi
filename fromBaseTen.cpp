#include <bits/stdc++.h>
using namespace std;

double x,x1; int n,m; string S; int baza = 16;
int main() { 
    cout<<"x="; cin>>x; x=abs(x); x1=x;
    n=trunc(x);
    if (n==0) S="0"; else S="";
    while (n) {
        if(n%baza <= 9) {
            S=char(n%baza+ '0')+S; n/=baza;
        } else {
            S=char(n%baza - 10 + 'A') + S; n/=baza;
        }
        
    }
    S+="."; x=x-trunc(x); 
    for(int i=1; i<=16; i++) { 
        x*=baza; n=trunc(x);
        if(n%baza <= 9) {
            S=S+char(n%baza+'0');
        } else {
            S=S+char(n%baza+'A');
        }
        
        x=x-trunc(x);
    }
    while (S[S.size()-1]=='0') S.erase((S.size()-1),1);
	if (S[S.size()-1]=='.') S.erase(S.size()-1,1);
	cout<<setprecision(20) << x1 <<" in baza 2 este = "<<S<<'\n';
    return 0;
   }
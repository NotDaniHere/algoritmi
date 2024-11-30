#include <bits/stdc++.h>
using namespace std;
int m; string S;
int main() { 
    cout<<"S="; cin>>S; 
    if (S.find('.',0)>S.size()) S=S+".";
    m=S.find(".",0); cout<<"locul punctului zecimal m="<<m<<endl;
    unsigned int P=1; double suma=0;
    for (int i=m-1; i>=0; i--) { 
        suma+=(int(S[i])-48)*P;
        P*=2;
	} 
	P=1; 
	for (int i=m+1; i<=S.size()-1; i++){ 
        P*=2;
		suma+=1.0*(int(S[i])-48)/P;	  
    } 
	cout<<"numarul S in baza 10 este= "<<setprecision(20)<<suma<<endl;       
    return 0;    
}
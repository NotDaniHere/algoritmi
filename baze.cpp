//Baza 10 to alta baza b000
double x,x1; int n,m; string S;
int main()
               { cout<<"x="; cin>>x; x=abs(x); x1=x;
                 n=trunc(x);
              if (n==0) S="0"; else S="";
        while (n) {
			 n%b000>10 ? S=char(n%b000+55)+S : S=char(n%b000+48)+S; 
			 n/=b000;}
                         S+="."; x=x-trunc(x); 
            for(int i=1; i<=16; i++)
                { x*=b; n=trunc(x);
                  n%b000>10 ? S=char(n%b000+55)+S : S=char(n%b000+48)+S; 
                  x=x-trunc(x);
                 }
        while (S[S.size()-1]=='0') S.erase((S.size()-1),1);
	   if (S[S.size()-1]=='.') S.erase(S.size()-1,1);
           cout<<x1<<"- in baza b este ="<<S<<'\n';

          return 0;}
//Alta baza in baza 10 b000
int m; string S;
int main()
   { cout<<"S="; cin>>S; 
     if (S.find('.',0)>S.size()) S=S+".";
     m=S.find(".",0); cout<<"locul punctului zecimal m="<<m<<endl;
     unsigned int P=1; double suma=0;
     for (int i=m-1; i>=0; i--)
               { int(S[i])>=65 ? suma+=(int(S[i])-48)*P : suma+=(int(S[i])-48)*P;
                 P*=b000;
			   } 
	 P=1; 
	 for (int i=m+1; i<=S.size()-1; i++)  
	      { P*=b000;
			int(S[i])>=65 ? suma+=(int(S[i])-48)/P : suma+=(int(S[i])-48)/P;	  } 
	 cout<<"numarul S in baza 10 este="<<setprecision(20)<<suma<<endl;       
     return 0;    
   }



a = abs(a); b = abs(b);
if (b!=0) r=a%b;
while (r) {a=b; b=r; r=a%b;}
cout<<"dc="<<b<<endl;

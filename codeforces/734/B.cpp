#include<bits/stdc++.h>
using namespace std;
int main(){

int i,j,k,a,b,c,d,n,t;
vector<int> s,v;
cin>>a>>b>>c>>d;

s.push_back(a);
s.push_back(c);
s.push_back(d);
sort(s.begin(),s.end());
n = s[0];
a = a-s[0];
c = c-s[0];
d =  d-s[0];
s.clear();
s.push_back(a);
s.push_back(b);
sort(s.begin(),s.end());
t = s[0];
i = 256*n;
i = i+(32*t);
v.push_back(i);
s.clear();
s.push_back(a);
s.push_back(b);
sort(s.begin(),s.end());
t = s[0];
a = a-s[0];
b = b-s[0];

s.clear();
s.push_back(a);
s.push_back(c);
s.push_back(d);
sort(s.begin(),s.end());
n = s[0];
i = n*256;
i = i+(32*t);
v.push_back(i);
sort(v.begin(),v.end());
cout<<v[1]<<endl;
return 0;
}

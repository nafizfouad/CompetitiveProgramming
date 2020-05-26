#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np,x,y,x1,y2,y1,x2;
    vector<ll > s;
    vector<ll > vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>st;
    c = st.size()-1;
    if(st[c]=='2' || st[c]=='4'|| st[c]=='5' || st[c]=='7'|| st[c]=='9')cout<<"hon"<<endl;
   else if(st[c]=='0' || st[c]=='1' || st[c]=='6'  || st[c]=='8')cout<<"pon"<<endl;
    else if(st[c]=='3')cout<<"bon"<<endl;
}

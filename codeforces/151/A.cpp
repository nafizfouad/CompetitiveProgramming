#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    vector<string> v,s,vv,ss;
    map<string,string> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a = k*l;
    a = a/nl;
    b=c*d;
    m = p/np;
    a = min(a,b);
    a = min(a,m);
    cout<<a/n<<endl;
}



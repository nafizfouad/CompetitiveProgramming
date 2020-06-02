#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,x,y;
    string st,et,ft;
    vector<ll > vv,v,s;
    map<ll,ll > pa,ea,ma;
    long double bb,cc,aa;
    cin>>n>>m;
    f = -999999;

        cin>>c>>d;
        for(j=0;j<n;j++){
            cin>>e;
            v.push_back(e);
        }

        for(j=0;j<m;j++){
            cin>>e;
            s.push_back(e);
        }

        sort(v.begin(),v.end());
        sort(s.begin(),s.end(),greater<ll>());
        b =v[c-1];
        a = s[d-1];
        if(b<a)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        v.clear();
        s.clear();


}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        for(j=1;j<=a;j++){
            cin>>c;
            v.push_back(c);
        }
        for(j=1;j<=a;j++){
            cin>>c;
            s.push_back(c);
        }
        sort(v.begin(),v.end());
        sort(s.begin(),s.end());
        c = 0;
        m = a-1;
        for(j=0;j<b;j++){
           if(v[j]<s[m]) {c = c+s[m];m--;}
           else{b++;c=c+v[j];}
           if(j==a-1){break;}
        }
        for(j=b;j<a;j++){
            c = c+v[j];
        }
        cout<<c<<endl;
        v.clear();
        s.clear();
    }
}

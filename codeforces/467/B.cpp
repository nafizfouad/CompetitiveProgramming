#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>m>>k;
    for(i=1; i<=m; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>a;
    while(a)
    {
        c = a%2;
        a = a/2;
        s.push_back(c);
    }
    ss = s;
    f = 0;
    for(i=0; i<m; i++)
    {
        a = v[i];
        vv.clear();
        while(a)
        {
            c = a%2;
            a = a/2;
            vv.push_back(c);
        }
        c = max(s.size(),vv.size());
        if(s.size()<vv.size()){
                e = vv.size()-s.size();
            for(j=1;j<=e;j++){
                s.push_back(0);
            }
            reverse(s.begin(),s.end());
            reverse(vv.begin(),vv.end());
        }
        else if(s.size()>vv.size()){
                e=s.size()-vv.size();
            for(j=1;j<=e;j++){
                   // cout<<"sdkj"<<endl;
                vv.push_back(0);
            }
            reverse(vv.begin(),vv.end());
            reverse(s.begin(),s.end());
        }
        else {
        reverse(vv.begin(),vv.end());
        reverse(s.begin(),s.end());
        }
        d = 0;
       // cout<<c<<" "<<vv.size()<<" "<<s.size()<<endl;
        for(j=0;j<c;j++){
          if(vv[j]!=s[j])d++;
        }
        if(d<=k)f++;
        s.clear();
        s = ss;
    }
    cout<<f<<endl;
}



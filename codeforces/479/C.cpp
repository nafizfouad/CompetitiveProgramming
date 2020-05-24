#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np,x,y,x1,y2,y1,x2;
     vector<ll > s;
    vector<pair<ll,ll> > vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>d;
        v.push_back({a,d});
    }
    sort(v.begin(),v.end());
    e = -999999;
     for(i=0;i+1<n;i++){
        if(v[i].second<=v[i+1].second){
            if(v[i+1].second>=e){
                e = v[i+1].second;
                s.push_back(e);
            }
            else {
                e = v[i+1].first;
                s.push_back(e);
            }
        }
        else {
            e = v[i+1].first;
            s.push_back(e);
        }
    }
    if(n==1)cout<<min(a,d)<<endl;
    else{
        sort(s.begin(),s.end());
        cout<<s[s.size()-1]<<endl;
    }
}

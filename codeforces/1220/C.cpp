#include<bits/stdc++.h>
#define ll unsigned long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc,dd,ee,ff,kk,gg;
    vector<string > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);

    cin>>st;
    for(i=0;i<st.size();i++){
        if(pq.size()==0)v.pb("Mike");
        else {
            char ch;
             ch = pq.top();
             if(ch<st[i])v.pb("Ann");
             else v.pb("Mike");
        }
        pq.push(st[i]);
    }
    for(i=0;i<v.size();i++)cout<<v[i]<<endl;
}


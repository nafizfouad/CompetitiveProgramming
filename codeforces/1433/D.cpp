#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    map<ll,ll > :: iterator it,ki;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        ma.clear();
        f = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            ma[a] = i;
        }
        if(ma.size()==1)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
             it = ma.begin();
            a = (*it).first;
            c = (*it).second;
            ++it;
            b = (*it).first;
            d = (*it).second;
            for(i=0;i<n;i++){
                if(v[i]!=a){
                    cout<<c+1<<" "<<i+1<<endl;
                }
            }
            for(i=0;i<n;i++){
                if(v[i]==a && i!=c){
                    cout<<d+1<<" "<<i+1<<endl;
                }
            }
        }
    }
}

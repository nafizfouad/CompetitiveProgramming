#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    map<char,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        c = 0;
        d = 0;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            if(a==0)c++;
            else d++;
            v.pb(a);
        }
        if(c>=d){
            for(i=0;i<v.size();i++) {
                if(v[i]==1)v[i]=-1;
            }
            cout<<c<<endl;
            for(i=0;i<v.size();i++) {
                if(v[i]!=-1)cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else{
            if(d%2==1){d--;f=1;}
            for(i=0;i<v.size();i++) {
                if(v[i]==0)v[i]=-1;
                else if(f==1 && v[i]==1){v[i]=-1;f=0;}
            }
            cout<<d<<endl;
            for(i=0;i<v.size();i++) {
                if(v[i]!=-1)cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        v.clear();
        s.clear();
    }
}

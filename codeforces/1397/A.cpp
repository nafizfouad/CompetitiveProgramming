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
    vector<string > v,s;
    map<char,vector<ll> > me;
    map<char,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>st;
            v.pb(st);
        }
        for(i=0;i<n;i++){
            for(j=0;j<v[i].size();j++){
                ma[v[i][j]]++;
            }
        }
        f = 0;
        for(auto it = ma.begin();it!=ma.end();it++){
            a = (*it).second;
            if(a%n!=0){f=1;break;}
        }
        if(f==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        v.clear();
        ma.clear();
    }
}

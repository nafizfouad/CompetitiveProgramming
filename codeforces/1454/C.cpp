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
    vector< pair<pair<ll,ll>,ll > > v,s,vv;
    vector<ll> ss,pp;
    map<ll,vector<ll> > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        for(j=0;j<n;j++){
            cin>>a;
            ma[a]++;
            me[a].pb(j);
        }
        f = 0;
        e = 1e18;
        for(auto it = ma.begin();it!=ma.end();it++){
            a = (*it).first;
            f = 0;
            d = me[a][0]-0;
            if(d!=0)f++;
            for(j=0;j+1<me[a].size();j++){
                d = me[a][j+1]-me[a][j];
                if(d!=1)f++;
            }
            d = (n-me[a][me[a].size()-1]);
            if(d!=1)f++;
            e = min(e,f);
        }
        cout<<e<<endl;
        ma.clear();
        me.clear();
    }
}

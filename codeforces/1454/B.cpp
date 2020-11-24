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
            sa[a] = j;
        }
        f = 0;
        for(auto it = ma.begin();it!=ma.end();it++){
            if((*it).second==1){
                f = 1;
                d = sa[(*it).first];
                break;
            }
        }
        if(f==1)cout<<d+1<<endl;
        else cout<<-1<<endl;
        ma.clear();
        sa.clear();
    }
}

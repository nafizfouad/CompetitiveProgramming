#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,ar[10005],br[10005];
ld aa,bb,ee,dd,ff,kk,gg;
vector<ll > v,s,vv;
vector<pair<ll,ll> > ss;
map<ll, ll > ta,pa,sa,ma;
map<ll,vector<pair<ll,ll> >  > me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        if(n==1){cout<<v[0]+k<<endl;continue;}
        sort(v.begin(),v.end());
        e = n/2;
        
        l = v[e];
        r = 2000000010;
        while(l!=r){
        m = (l+r+1)/2;
            ma[m]++;
            if(ma[m]>1)break;
            c = 0;
        for(i=e;i<n;i++){
        c = c+max(0LL,m-v[i]);
}
            if(c>k)r = m-1;
            else if(c<=k) l = m;
            
    }
        cout<<l<<endl;
        v.clear();
    }
}

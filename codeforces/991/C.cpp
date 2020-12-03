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
    vector<ll > v,s,vv;
    vector<ll> ss,pp;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    t = n/2;
    if(n%2==1)t++;
    l = 1;
    r = n;
    f = 2e18;
    while(l<=r){
        m = (l+r)/2;
        me[{l,r}]++;
        if(me[{l,r}]>1)break;
        b = m;
        c = n;
        d = 0;
        while(c>9){
            c = c-b;
            d = d+b;
            if(c<10){d=d+c;break;}
            else{
                c = c-(c/10);
                if(c<10){d=d+c;break;}
            }
        }
        if(d>=t)r = m;
        else l = m;
        if(d>=t)f=min(f,m);
    }
    if(f==2e18 || n<10)f=1;
    cout<<f<<endl;
}

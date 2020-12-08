#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,e;
    vector<ll > v,s,vv,tt;
    vector<ll> ss,pp;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
     for(i=0; i<n; i++)
    {
        c = 1;
        while(c<v[i]+1)c=c*2;
        if(v[i]==2)cout<<3<<endl;
        else if(c>v[i]+1)cout<<c-1<<endl;
        else {
            a = 1;
            for(j=2;j*j<=v[i];j++){
                if(v[i]%j==0){
                    a = v[i]/j;
                    break;
                }
            }
            cout<<a<<endl;
        }
    }
}

#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk;
    vector<ll > v,s;
    vector<ll >ss;
    map<char,vector<ll> > me;
    map<ll,ll> sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
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
    sort(v.begin(),v.end(),greater<ll>());
    c = 0;
    d = 1000000000000;
    for(i=0; i<v.size(); i++)
    {
        f = -1;
        if(v[i]+1<d){
            c++;
            f = v[i]+1;
        }
        else if(v[i]<d){
            c++;
            f = v[i];
        }
        else if(v[i]-1<d && v[i]-1>0){
            c++;
            f = v[i]-1;
        }
        if(f==-1)continue;
        else d=f;
    }
    cout<<c<<endl;
}


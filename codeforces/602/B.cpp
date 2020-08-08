#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    //vector<string> ss,vv,pp;
    map<ll, ll > ta,pa,sa,ma;
    map<ll,vector<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    d = v[0];
    e = v[0];
    c = 1;
    s.pb(c);
    for(i=0; i+1<n; i++)
    {
        d = min(d,v[i]);
        d = min(d,v[i+1]);
        e = max(e,v[i]);
        e = max(e,v[i+1]);
        b = abs(d-e);
        if(v[i]!=v[i+1])
        {
            ma[v[i+1]]=1;
        }
        else ma[v[i+1]]++;
        if(b<=1)
        {
            c++;
        }
        else
        {
            s.pb(c);
            if(abs(v[i]-v[i+1])<=1)
            {
                c = ma[v[i]]+1;
                d = v[i];
                e = v[i];
            }
            else
            {
                c = 1;
                d=v[i+1];
                e=v[i+1];
            }
        }
    }
    s.pb(c);
    sort(s.begin(),s.end());
    cout<<s[s.size()-1]<<endl;
}

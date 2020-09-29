#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,vv,s;
    vector<ll> ss[1010];
    map<char,ll > mm;
    map<ll, ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    if(n<=2)
    {
        cout<<0<<endl;
        for(i=0; i<n; i++)cout<<v[i]<<" ";
        cout<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    b = n/2;
    if(n%2==0)b--;
    j = b;
    if(n%2==0)
    {
        s.pb(v[j]);
        j++;
    }
    c = 0;
    m =0;
    f = 0;
    for(i=j; i+1<n; i++)
    {
        if(v[i]>v[m] && v[i+1]>v[m])
        {
            if(f==0)
            {
                s.pb(v[i]);
                s.pb(v[m]);
                s.pb(v[i+1]);
            }
            else if(f==1)
            {
                s.pb(v[m]);
                s.pb(v[i+1]);
            }
            c++;
            m++;
            f=1;
        }
        else
        {
            f=0;
            s.pb(v[i]);
            if(i+1==n-1)
            {
                s.pb(v[m]);
                s.pb(v[i+1]);
            }
        }
    }
    cout<<c<<endl;
    for(i=m+1;i<=j;i++){
        s.pb(v[i]);
    }
    for(i=0; i<n; i++)
    {
        cout<<s[i]<< " ";
    }
    cout<<endl;
}

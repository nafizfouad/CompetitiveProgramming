#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
using namespace std;


int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,pair<ll,ll> > me;
    map<char ,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
     c = 0;
    for(k=0; k<n; k++)
    {
        cin>>a>>b;
        c = c+a;
        v.pb(a+b);
        st.pb('A');
    }
    sort(v.begin(),v.end());
    if(c<=500)cout<<st<<endl;
    else
    {
        for(k=v.size()-1; k>=0; k--)
        {
            c = c-v[k];
            st[k] = 'G';
            if(c<=500)break;
        }
        if(c>500)cout<<-1<<endl;
        else cout<<st<<endl;
    }
}




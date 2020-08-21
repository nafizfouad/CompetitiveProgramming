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
    vector<ll > v,s,vv;
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>t;
        for(j=0; j<t; j++)
        {
            cin>>a;
            v.pb(a);
        }
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            s = v;
            sort(s.begin(),s.end());
            c = s[0];
            for(j=0;j<t;j++){
                if(v[j]!=s[j]){
                    vv.pb(v[j]);
                }
            }
            f = 0;
            for(j=0;j<vv.size();j++){
                if(vv[j]%c!=0)f=1;
            }
            if(f==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        v.clear();
        s.clear();
        vv.clear();
    }

}

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
    vector<string> v,s;
    vector<ll> ss,vv,pp;
    map<string,ll > mm;
    map<ll,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            ma[a]++;
            sa[b]++;
            if(a==b)ta[a] = b;
        }
        c = 0;
        for(auto it = ma.begin();it!=ma.end();it++){
            a = (*it).first;
            b = (*it).second;
            if(b==1 && ta[a]==a && sa[a]==1)c++;
            else if(b>1 && sa[a]==1 && ta[a]==a)c++;
            else if(sa[a]==0)c = c+b;
        }
         cout<<c<<endl;
}

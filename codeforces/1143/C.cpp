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
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    //map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        if(a!=-1){
            if(b==0){
                ma[a] = 1;
            }
            else if(b==1){
                aq.push(i);
            }
            me[a].pb(i);
        }
        sa[i] =a;
    }
    f = 0;
    while(1){
        if(aq.size()>0){
            b = aq.top();
            if(ma[b]==0){
                c = sa[b];
                for(j=0;j<me[b].size();j++){
                    e = me[b][j];
                    sa[e] = c;
                }
                v.pb(b);

                f = 1;
            }
            aq.pop();
        }
        else break;
    }
    if(f==0)cout<<-1<<endl;
    else for(i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}

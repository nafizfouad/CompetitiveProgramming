#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > pp,ss,oo,uu;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
multiset<pair<ll,ll> >si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {

        cin>>n;
        c = 1;
        e = 0;

        d = 0;
        f = 0;
        n = n-1;
        for(i=2,j=1;; j++, i++)
        {
            p = n-i;
            if(p>0)
            {

                if(j%4==3 || j%4==0)
                {
                    l = ((i-1)*i)/2;
                    l++;
                    if(l%2==0){
                       if(i%2==0)c = c+(i/2), e= e+(i/2);
                       else c = c+(i/2), e = e+(i/2)+1;
                    }
                    else{
                       if(i%2==0)c = c+(i/2), e= e+(i/2);
                       else c = c+(i/2)+1, e = e+(i/2);
                    }
                }
                else
                {
                    l = ((i-1)*i)/2;
                    l++;
                    if(l%2==0){
                       if(i%2==0)d = d+(i/2), f= f+(i/2);
                       else d = d+(i/2), f = f+(i/2)+1;
                    }
                    else{
                       if(i%2==0)d = d+(i/2), f= f+(i/2);
                       else f = f+(i/2)+1, f = f+(i/2);
                    }

                }

            }
            else
            {
                if(j%4==3 || j%4==0)
                {
                    l = ((i-1)*i)/2;
                    l++;
                    if(l%2==0){
                       if(n%2==0)c = c+(n/2), e= e+(n/2);
                       else c = c+(n/2), e = e+(n/2)+1;
                    }
                    else{
                       if(n%2==0)c = c+(n/2), e= e+(n/2);
                       else c = c+(n/2)+1, e = e+(n/2);
                    }
                }
                else
                {
                    l = ((i-1)*i)/2;
                    l++;
                    if(l%2==0){
                       if(n%2==0)d = d+(n/2), f= f+(n/2);
                       else d = d+(n/2), f = f+(n/2)+1;
                    }
                    else{
                       if(n%2==0)d = d+(n/2), f= f+(n/2);
                       else f = f+(n/2)+1, f = f+(n/2);
                    }

                }
            }
            n = n-i;
            if(n<=0)break;
        }
        cout<<c<<" "<<e<<" "<<d<<" "<<f<<endl;
    }
}

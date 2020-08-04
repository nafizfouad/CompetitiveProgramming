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
    vector<string> ss,vv,pp;
    map<ll,vector<ll> > mm;
    map<ll,ll > ta,pa,ma;
    map<ll,ll > sa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n>>m>>k;
    for(i=0; i<m; i++)
    {
        cin>>a;
        v.pb(a);
    }
    c = 0;
    d = 0;
    for(i=0; i<m; i++)
    {
        b = (v[i]-c)%k;
        x = (v[i]-c)/k;
        if(b!=0)x++;
        //cout<<b<<" "<<v[i]<<" "<<c<<endl;
        if(b==0)
        {
            c++;
            d++;
        }
        else
        {
            e = b;
            ma[b] = 1;
            f = c;
            c++;
            while(e>=b && e<=k-1)
            {
                i++;
                if(i==m)break;
                e = (v[i]-f)%k;
                if(ma[e]==1){i--;break;}
                else {ma[e]=1;c++;}
                g = (v[i]-f)/k;
                if(e!=0)g++;
               // cout<<g<<" "<<x<<" "<<v[i]<<" "<<f<<endl;
                if(g!=x){c--;i--;break;}
                if(e==0)break;
            }
            d++;
            ma.clear();
        }
    }
    cout<<d<<endl;
}

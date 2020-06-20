#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc;
    vector<ll > v[45],s,vv;
    vector<ll > :: iterator it,ki;
    map<ll,ll> sa,ta,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v[a].pb(i);
    }
    d = 0;
    c = 0;
    f = 0;
    e = 0;
    g = 0;
    h = 0;
    x = 0;
    if(v[4].size()==0)f=1;
    if(v[8].size()==0)f=1;
    if(v[15].size()==0)f=1;
    if(v[16].size()==0)f=1;
    if(v[23].size()==0)f=1;
    if(v[42].size()==0)f=1;
    if(f==0){
      for(i=0; i<v[4].size(); i++)
    {

        if(c==5)d++;
        c = 0;
        a = v[4][i];
        it = upper_bound(v[8].begin()+e,v[8].end(),a);
        if(it!=v[8].end())
        {
            b = distance(v[8].begin(),it);
            a = v[8][b];
            e = b+1;
            if(ma[a]==0){
                ma[a]=1;
                c++;
            }
        }
        else continue;
        it = upper_bound(v[15].begin()+f,v[15].end(),a);
        if(it!=v[15].end())
        {
            b = distance(v[15].begin(),it);
            a = v[15][b];
             f =b+1;
           if(ma[a]==0){
                ma[a]=1;
                c++;
            }
        }
        else continue;
        it = upper_bound(v[16].begin()+g,v[16].end(),a);
        if(it!=v[16].end())
        {
            b = distance(v[16].begin(),it);
            a = v[16][b];
             g=b+1;
            if(ma[a]==0){
                ma[a]=1;
                c++;
            }
        }
        else continue;
        it = upper_bound(v[23].begin()+h,v[23].end(),a);
        if(it!=v[23].end())
        {
            b = distance(v[23].begin(),it);
             h=b+1;
            a = v[23][b];
            if(ma[a]==0){
                ma[a]=1;
                c++;
            }
        }
        else continue;
        it = upper_bound(v[42].begin()+x,v[42].end(),a);
        if(it!=v[42].end())
        {
            b = distance(v[42].begin(),it);
            a = v[42][b];
            x =b+1;
            if(ma[a]==0){
                ma[a]=1;
                c++;
            }
        }
        else continue;
    }
    if(c==5)d++;
    d =d*6;
    cout<<n-d<<endl;
    }
    else cout<<n<<endl;
}


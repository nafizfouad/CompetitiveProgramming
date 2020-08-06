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
    map<ll, ll > ta,pa,ma,sa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    ios_base::sync_with_stdio(false);
    ll ar[501][501];
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n;
    g = 0;
    for(i=0; i<n; i++)
    {
        f = 0;
        c = 0;
        for(j=0; j<n; j++)
        {
            cin>>a;
            ar[i][j]=a;
            c = c+a;
            if(a==0){f=1;l=i;
            m=j;}
            sa[j]=sa[j]+a;
        }
        if(f==0)
        {
            d=c;
            ma[d]++;
        }
        else if(f==1)
        {
            e=c;
        }
    }

    if(n==1)d=5;
    sa[m]=sa[m]+(d-e);
    ar[l][m]=ar[l][m]+(d-e);



    for(auto it =sa.begin();it!=sa.end();it++){
        a = (*it).second;
        ma[a]++;
    }
    c = 0;
    for(i=0,j=0;i<n;i++,j++){
        c = c+ar[i][j];
    }
    ma[c]++;
    c = 0;
    for(i=0,j=n-1;i<n;i++,j--){
        c = c+ar[i][j];
    }
    ma[c]++;
    if(ma.size()>1 || d-e<=0)cout<<-1<<endl;
    else cout<<d-e<<endl;
}

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
    map<char,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>st;
            v.pb(st);
        }
        e = 0;
        f = 0;
        g = 0;
        for(i=0; i<n; i++)
        {
            c = 0;
            d = 0;
            for(j=0; j<v[i].size(); j++)
            {
                if(v[i][j]=='1')c++;
                else d++;
            }
            if(c%2==1 && d%2==1)e++;
            else if(c%2==1 && d==0)f++;
            else if(d%2==1 && c==0)f++;
            else if(c%2==0 && d%2==1)g++;
            else if(c%2==1 && d%2==0)g++;
        }
        if(e%2==0)cout<<n<<endl;
        else if(e%2==1 && (f>0 || g>0))cout<<n<<endl;
        else cout<<n-1<<endl;
        v.clear();
    }
}

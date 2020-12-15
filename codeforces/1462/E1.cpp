#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,e,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,pp;
    vector<ll > v,s,vv,tt;
    vector<ll> ss;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            c = ((i+1)*(i+2))/2;
            s.pb(c);
            v.pb(a);
        }
        sort(v.begin(),v.end());
        c = 0;
        for(i=0;i<n;i++){
            auto it = upper_bound(v.begin(),v.end(),(v[i]+2));
            d = distance(v.begin(),it);
            if(it==v.end())d=n-1;
            if(v[d]>(v[i]+2))d--;
            if((d-i)>1){
                c = c+s[(d-i)-2];
            }
        }
        cout<<c<<endl;
        v.clear();
        s.clear();
    }

}

#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector< pair <pair<ll,ll>,pair<ll,ll> > > v,s,vv;
    map<char,vector<ll> > me;
    map<pair<ll,ll >,ll> sa,ta,pa,ma;
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
        ma.clear();
        cin>>st;
        a =0;
        b=0;
        ma[{a,b}]=0;
        sa[{a,b}]=1;
        l = -1;
        r = n;
        for(i=0; i<n; i++)
        {
            if (st[i] == 'L') a--;
			if (st[i] == 'R') a++;
			if (st[i] == 'U') b++;
			if (st[i] == 'D') b--;
			if(ma.count({a,b})){
                if(i - ma[{a,b}] + 1 < r - l + 1){
                    r = i;
                    l = ma[{a,b}];
                }
			}
			ma[{a,b}]=i+1;
        }
        if(l==-1)cout<<-1<<endl;
        else cout<<l+1<<" "<<r+1<<endl;
    }
}

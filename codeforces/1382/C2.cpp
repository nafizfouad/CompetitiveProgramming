#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,e;
    vector<pair<ll,ll> > v,s,vv;
    vector<ll> ss,pp;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>l;
    while(l--)
    {
        cin>>n;
        cin>>st;
        cin>>et;
        t = 0;
        if(n==1){
            if(st!=et)cout<<1<<" "<<1<<endl;
            else cout<<0<<endl;
            continue;
        }
        b = n/2;
        c = n;
        m = n-1;
        j = 0;
        for(i=1;i<=b;i++){
            if(et[m]==st[j])v.pb({1,c}),t=t+2;
            else v.pb({0,c}),t++;
            c = c-2;
            j++;
            m = m-2;
        }
        if(n%2!=0){
            if(et[0]!=st[n/2])v.pb({0,1}),t++;
        }
        j = n-1;
        m = n-2;
        c = n-1;
        for(i=1;i<=b;i++){
            if(et[m]!=st[j])s.pb({1,c}),t=t+2;
            else s.pb({0,c}),t++;
            c = c-2;
            j--;
            m = m-2;
        }
        d = v.size()+s.size();
        cout<<t<<" ";
        c = 0,e=0;
        for(i=0;i<d;i++){
            if(i%2==0){
                if(v[c].first==0)cout<<v[c].second<<" ";
                else cout<<v[c].first<<" "<<v[c].second<<" ";
                c++;
            }
            else if(i%2==1){
                if(s[e].first==0)cout<<s[e].second<<" ";
                else cout<<s[e].first<<" "<<s[e].second<<" ";
                e++;
            }
        }
        cout<<endl;
        v.clear();
        s.clear();
    }
}

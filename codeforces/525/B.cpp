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
    //vector<string> ss,vv,pp;
    map<ll, ll > ta,pa,sa,ma;
    map<ll,vector<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>st;
    t = st.size();
    st = "!"+st;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
        ma[a]++;
    }
    sort(v.begin(),v.end());
    c = 0;

    for(i=1; i<=st.size()/2; i++)
    {
       if(ma[i]!=0)c = c+ma[i];
       if(c%2==1){
        char ch;
        //cout<<st[i]<<" "<<st[t-i+1]<<endl;
        ch = st[i];
        st[i]=st[t-i+1];
        st[t-i+1] = ch;
       }
    }
    st.erase(st.begin());
    cout<<st<<endl;
}

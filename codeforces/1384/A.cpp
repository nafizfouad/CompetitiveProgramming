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
    map<char,ll > ta,pa,ma;
    map<ll,ll > sa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        et.clear();
        st.clear();
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        for(i=0;i<200;i++){
            st.pb('a');
        }
        vv.pb(st);
        for(i=0;i<n;i++){
            for(j=0;j<v[i];j++){
                et.pb(st[j]);
            }
            char ch= st[j];
            ch++;
            if(ch=='z')ch='a';
            for(j=v[i];j<200;j++){
                et.pb(ch);
            }
            vv.pb(et);
            st.clear();
            st = et;
            et.clear();
        }
        for(i=0;i<=n;i++)cout<<vv[i]<<endl;
        vv.clear();
        v.clear();
    }

}

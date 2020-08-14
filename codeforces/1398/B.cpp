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

    cin>>n;
    for(i=0;i<n;i++){
        cin>>st;
        v.clear();
        t =st.size();
        for(j=0;j<t;j++){
            if(st[j]=='1'){
                    c = 0;
                while(st[j]=='1'){
                    c++;
                    j++;
                    if(j==st.size())break;
                }
                v.pb(c);
            }
        }
        if(v.size()==0)cout<<0<<endl;
        else {
                c = 0;
            sort(v.begin(),v.end(),greater<ll>());
            for(j=0;j<v.size();j=j+2){
                c = c+v[j];
            }
            d = 0;
            for(j=1;j<v.size();j=j+2){
                d = d+v[j];
            }
            cout<<max(c,d)<<endl;
        }
    }
}

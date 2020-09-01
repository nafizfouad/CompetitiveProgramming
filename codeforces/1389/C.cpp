#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<string > v,s,vv;
    map<char,ll > mm;
    map<char,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,ft,pt,et,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>st;
        for(j=0;j<=9;j++){
            for(k=0;k<=9;k++){
                    char ch,bh;
                ch = j+'0';
                bh = k+'0';
                et.clear();
                et.pb(ch);
                et.pb(bh);
                v.pb(et);
            }
        }g = 9999999999;
        for(j=0;j<st.size();j++){
            ma[st[j]]++;
        }
        for(auto it = ma.begin();it!=ma.end();it++){
            a = (*it).second;
            a = st.size()-a;
            g = min(a,g);
        }
        f = 0;
        for(j=0;j<100;j++){
            f = 0;
            c = 0;
            for(k=0;k<st.size();k++){
                if(st[k]==v[j][0] && f==0){
                    f=1;
                }
                else if(st[k]==v[j][1] && f==1){
                    f=0;
                    c++;
                }
            }
             c= c*2;
             e = st.size()-c;
             g = min(g,e);
        }
        cout<<g<<endl;
        v.clear();
        ma.clear();
    }

}

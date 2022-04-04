#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
using namespace std;


int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll ,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>st;
        d = 0;
        e = 0;
        for(i=0;i<st.size();i++){
            if(st[i]=='0'){
                    c = 0;
                while(st[i]=='0'){
                    c++;
                    i++;
                    if(i==st.size())break;
                }
                c--;
                d = d+c;
                i--;
            }
            else if(st[i]=='1'){
                    c = 0;
                while(st[i]=='1'){
                    c++;
                    i++;
                    if(i==st.size())break;
                }
                c--;
                e = e+c;
                i--;
            }
        }
        cout<<max(d,e)<<endl;
    }
}
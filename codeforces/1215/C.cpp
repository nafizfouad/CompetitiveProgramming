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
    vector<pair<ll,ll> > ss;
    map<ll,pair<ll,ll> > me;
    map<char ,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    cin>>st;
    cin>>et;
    for(i=0; i<st.size(); i++)
    {
        ma[st[i]]++;
        ma[et[i]]++;
    }
    if(ma['a']%2!=0 || ma['b']%2!=0)cout<<-1<<endl;
    else
    {
        c = 0;
        d = 0;
        e = 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='a' && et[i]=='b' && c==0){
                c++;
                j=i;
            }
            else if(st[i]=='a' && et[i]=='b' && c==1){
                e++;
                c = 0;
                swap(st[j],et[i]);
                ss.pb({j,i});
            }
            else if(st[i]=='b' && et[i]=='a' && d==0){
                d++;
                k=i;
            }
            else if(st[i]=='b' && et[i]=='a' && d==1){
                e++;
                d = 0;
                swap(st[k],et[i]);
                ss.pb({k,i});
            }
        }
        if(c==1){ss.pb({j,j});ss.pb({j,k});e=e+2;}
        cout<<e<<endl;
        for(i=0;i<ss.size();i++){
            cout<<ss[i].first+1<<" "<<ss[i].second+1<<endl;
        }
    }
}




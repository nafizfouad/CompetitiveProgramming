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
    vector<ll > v,s;
    map<char,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>st;
        st = ")"+st;
        a = n/k;
        b = (a*2);
        m = k-1;
        l = 1;
        a = k/2;
        d = 0;
        e = -99999999;
        for(i=1; i<=a; i++)
        {
            c = i;
            e = -99999999;
            for(j=1; j<=b; j++)
            {
                ma[st[c]]++;
                e = max(e,ma[st[c]]);
                if(j%2==1)c=c+m;
                else c= c+l;
            }
            d = d+(b-e);
            m =m-2;
            l = l+2;
            ma.clear();
        }
        if(k%2==1){
                ma.clear();
            l = k/2+1;
            c = l;
            e = -999999;
            b = n/k;
            for(j=1;j<=b;j++){
                ma[st[c]]++;
                e = max(e,ma[st[c]]);
                c = c+k;
            }
            d = d+(b-e);
        }
        cout<<d<<endl;
        ma.clear();
        st.clear();
    }
}

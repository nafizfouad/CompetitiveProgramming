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
    map<pair<ll,ll> ,ll > sa,ta,pa,ma;
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
        cin>>n>>k;
        cin>>st;
        b = 0;
        j = -2;
        f = 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='1')
            {
                b++;
                de.pb('1');
            }
            else if(st[i]=='0' && f==0)
            {
                if(k>=b)
                {
                    k = k-b;
                    de.pf('0');
                    if(k==0)f=1;
                }
                else
                {
                    for(j=i-1; j>=0; j--)
                    {
                        if(de[j]=='1')k--;
                        if(k==0)break;
                    }
                    f=1;
                }
            }
            else de.pb(st[i]);
        }
        for(i=0; i<de.size(); i++)
        {
            if(i==j)
            {
                cout<<0;
                i--;
                j = -2;
            }
            else cout<<de[i];
        }
        cout<<endl;
        de.clear();
        st.clear();
    }

}



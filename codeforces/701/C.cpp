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
    for(k=0; k<n; k++)
    {
        ma[st[k]]++;
    }
    a = ma.size();
    ma.clear();
    l = 0;
    for(k=0; k<n; k++)
    {
        ma[st[k]]++;
        if(ma.size()==a)
        {
            v.pb((k-l)+1);
            if(k-l==a-1)break;
            if(ma[st[l]]>1)
            {
                for(i=l; i<k; i++)
                {
                    ma[st[i]]--;
                    if(ma[st[i]]<1)
                    {
                        ma[st[i]]++;
                        v.pb((k-i)+1);
                        break;
                    }
                }
                if(k-i==a-1)break;
                l = i;
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}




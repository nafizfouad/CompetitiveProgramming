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
    vector<string> v,s;
    vector<ll> ss,vv,pp;
    map<string,ll > mm;
    map<char,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        mm.clear();
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>st;
            if(mm[st]==0)
            {
                mm[st]=1;
            }
            else
            {
                c++;
                s.pb(st);
                ss.pb(i);
            }
            v.pb(st);
            ma[st[0]]=1;
        }
        cout<<c<<endl;
        for(i=0; i<10; i++)
        {
            if(ma[i+'0']==0)vv.pb(i);
        }
       // cout<<s.size()<<" "<<vv.size()<<endl;
        for(i=0; i<s.size(); i++)
        {
            c = s[i][0]-'0';
            for(j=0; j<vv.size(); j++)
            {
                if(vv[j]!=c && vv[j]!=-1)
                {
                    s[i][0] = vv[j]+'0';
                    vv[j]=-1;
                    break;
                }
            }
        }
        for(i=0; i<s.size(); i++)
        {
            v[ss[i]] = s[i];
        }
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
        v.clear();
        s.clear();
        vv.clear();
        ss.clear();
        ma.clear();
        mm.clear();
    }
}

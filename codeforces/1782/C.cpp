#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<pair< pair<ll,ll>,char> > s,v,vv,rr;
vector<char > pp,ss,oo,uu;
map<char,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char > de,ne;
multiset<pair<ll,ll> >si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>st;
        for(i=0; i<n; i++)
        {
            ma[st[i]]++;
        }
        for(char ch= 'a'; ch<='z'; ch++)
        {
            if(ma[ch]==0)
            {

            }
        }
        for(auto it = ma.begin(); it!=ma.end(); it++)
        {
            si.insert({(*it).second,(*it).first});
        }
//        for(auto it = si.begin();it!=si.end();it++){
//            cout<<(*it)<<" ";
//        }
//        cout<<endl;
        c = 1e18;
        for(i=1; i<=26; i++)
        {
            if(n%i==0)
            {
                b = n/i;
                for(auto it = si.begin(); it!=si.end(); it++)
                {
                    if((*it).first<=b) v.pb({{b-(*it).first,1},(*it).second});
                    else v.pb({{b-(*it).first,2},(*it).second});
                }
                sort(v.begin(),v.end());
//                if(b==1){
//                    for(j=0;j<v.size();j++){
//                        cout<<v[j]<<" ";
//                    }
//                    cout<<endl;
//                }

                d = 0;
                ss.clear();
                oo.clear();
                for(j=1,k=0; j<=i; k++,j++)
                {
                    if(v[k].first.second==1)d = d+v[k].first.first,ss.pb(v[k].second);
                    else oo.pb(v[k].second);
                }
                if(c>d)
                {
                    c = d;
                    e = b;
                    pp.clear();
                    uu.clear();
                    uu = oo;
                    pp = ss;
                }
                v.clear();
            }
        }

        for(i=0; i<uu.size(); i++)
        {
            sa[uu[i]]=1;
           // cout<<uu[i]<<" ";
        }
       // cout<<endl;
        for(i=0; i<pp.size(); i++)
        {
            de.pb(pp[i]);
            //cout<<pp[i]<<" ";
            ta[pp[i]]=1;
        }
       // cout<<e<<endl;
        for(i=0; i<n; i++)
        {
            if(sa[st[i]]==1)
            {
                if(pa[st[i]]<e)pa[st[i]]++;
                else
                {
                    //cout<<'l'<<endl;
                    xx:
                    char ch = de.front();
                    //cout<<ch<<" "<<ma[ch]<<endl;
                    if(ma[ch]<e)st[i]=ch,ma[ch]++;
                    else
                    {
                        de.pop_front();
                        goto xx;
                    }
                }
            }
            else if(ta[st[i]]==0){
                goto xx;
            }
        }
        cout<<c<<endl;
        cout<<st<<endl;
        v.clear();
        si.clear();
        ma.clear();
        pa.clear();
        sa.clear();
        ta.clear();
        de.clear();
        pp.clear();
        ss.clear();
        oo.clear();
        uu.clear();
        si.clear();
    }
}

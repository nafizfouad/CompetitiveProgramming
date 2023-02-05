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
vector<string > s,v,vv,rr;
vector< pair< pair<ll,ll>,pair<ll,ll> > > pp,ss,oo,uu;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,deque<ll> >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
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
        for(i=0; i<n; i++)
        {
            cin>>st;
            v.pb(st);
        }
        for(i=0; i<n; i++)
        {
            c = 0,d= 0,e=0;
            for(j=0; j<3; j++)
            {
                if(v[i][j]=='w')c++;
                else if(v[i][j]=='i')d++;
                else e++;
            }
            if(c==3)
            {
                me[ {1,2}].pb(i);
                me[ {1,3}].pb(i);
            }
            else if(c==2)
            {
                if(d==1)
                {
                    me[ {1,3}].pb(i);
                }
                else
                {
                    me[ {1,2}].pb(i);
                }
            }
            else if(d==3)
            {
                me[ {2,1}].pb(i);
                me[ {2,3}].pb(i);
            }
            else if(d==2)
            {
                if(c==1)
                {
                    me[ {2,3}].pb(i);
                }
                else
                {
                    me[ {2,1}].pb(i);
                }
            }
            else if(e==3)
            {
                me[ {3,1}].pb(i);
                me[ {3,2}].pb(i);
            }
            else if(e==2)
            {
                if(c==1)
                {
                    me[ {3,2}].pb(i);
                }
                else
                {
                    me[ {3,1}].pb(i);
                }
            }
        }
       // cout<<me.size()<<endl;
        for(auto it = me.begin(); it!=me.end(); it++)
        {
            a = (*it).first.first;
            b = (*it).first.second;
           // cout<<a<<" "<<b<<" "<<me[ {a,b}].size()<<endl;
            f = 0;
            for(j=0; j<me[ {a,b}].size(); j++)
            {
                if(me[ {b,a}].size()>0)
                {
                    ss.pb({{me[{a,b}][j],a},{me[{b,a}].front(),b}});
                    me[ {b,a}].pop_front();
                    f++;
                }
                else
                {
                    if(a==1 && b==2)
                    {
                        if(me[ {2,3}].size()>0)
                        {
                            ss.pb({{me[{a,b}][j],a},{me[{2,3}].front(),2}});
                            me[ {1,3}].pb(me[ {2,3}].front());
                            me[ {2,3}].pop_front();
                            f++;
                        }
                    }
                    else if(a==1 && b==3)
                    {
                        if(me[ {3,2}].size()>0)
                        {
                            ss.pb({{me[{a,b}][j],a},{me[{3,2}].front(),3}});
                            me[ {1,2}].pb(me[ {3,2}].front());
                            me[ {3,2}].pop_front();
                            f++;
                        }
                    }
                    else if(a==2 && b==1)
                    {
                        if(me[ {1,3}].size()>0)
                        {
                            ss.pb({{me[{a,b}][j],a},{me[{1,3}].front(),1}});
                            me[ {2,3}].pb(me[ {1,3}].front());
                            me[ {1,3}].pop_front();
                            f++;
                        }
                    }
                    else if(a==2 && b==3)
                    {
                        if(me[ {3,1}].size()>0)
                        {
                            ss.pb({{me[{a,b}][j],a},{me[{3,1}].front(),3}});
                            me[ {2,3}].pb(me[ {3,1}].front());
                            me[ {3,1}].pop_front();
                            f++;
                        }
                    }
                    else if(a==3 && b==1)
                    {
                        if(me[ {1,2}].size()>0)
                        {
                            ss.pb({{me[{a,b}][j],a},{me[{1,2}].front(),1}});
                            me[ {3,3}].pb(me[ {1,2}].front());
                            me[ {1,2}].pop_front();
                            f++;
                        }
                    }
                    else if(a==3 && b==2)
                    {
                        if(me[ {2,1}].size()>0)
                        {
                            ss.pb({{me[{a,b}][j],a},{me[{2,1}].front(),2}});
                            me[ {3,3}].pb(me[ {2,1}].front());
                            me[ {2,1}].pop_front();
                            f++;
                        }
                    }
                    else break;
                }
            }
            while(f>0)me[ {a,b}].pop_front(),f--;
        }
        cout<<ss.size()<<endl;
        for(i=0; i<ss.size(); i++)
        {
            a = ss[i].first.first;
            b = ss[i].first.second;
            c = ss[i].second.first;
            d = ss[i].second.second;

            char ch, bh;
            if(b==1)ch='w';
            else if(b==2)ch='i';
            else ch='n';

            if(d==1)bh='w';
            else if(d==2)bh='i';
            else bh='n';

            cout<<a+1<<" "<<ch<<" "<<c+1<<" "<<bh<<endl;

        }
        ss.clear();
            me.clear();
            v.clear();
    }
}

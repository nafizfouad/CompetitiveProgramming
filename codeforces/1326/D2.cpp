/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 1000000007
#define mod1 1000000009
#define cl clear()
#define con continue
//#define endl '\n'
#define MAXN 200003
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
long long int i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w,c,d,e,f,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv,rr,hh,pp;
vector<pair<ll,ll> > ss;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<char,ll >se,me;
map<pair<ll,ll>,ll >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll er[130];

ll bigmod(ll a,ll b,ll c)
{

    long long int i,j,k;
    if(b==0)
    {
        return 1%c;
    }
    j = bigmod(a,b/2,c);
    j = (j*j)%c;
    if(b%2==1)
    {
        j=(j*a)%c;
    }
    return j;
}

ll LongestPalindromicPrefix(string str)
{

    string temp = str + '?';

    reverse(str.begin(), str.end());

    temp += str;

    int n = temp.length();

    int lps[n];

    fill(lps, lps + n, 0);

    for (int i = 1; i < n; i++) {

        int len = lps[i - 1];

        while (len > 0
               && temp[len] != temp[i]) {
            len = lps[len - 1];
        }

        if (temp[i] == temp[len]) {
            len++;
        }

        lps[i] = len;
    }
    return lps[n-1];
}

int main()
{
    fast;
    i=1;
    for(char ch='a'; ch<='z'; ch++)
    {
        er[int(ch)]=i;
        i++;
    }
    cin>>t;

    while(t--)
    {

        cin>>st;
        n=st.size();

        u=0;
        o=0;
        f=0;
        for(i=0,j=n-1; i<st.size(); j--, i++)
        {
            //cout<<i<<endl;
            b = er[int(st[i])];
            x = bigmod(29,i,mod);
            y = bigmod(29,i,mod1);
            u = (u+((b*x)%mod))%mod;
            o = (o+((b*y)%mod1))%mod1;
           // cout<<i<<" "<<b<<" "<<u<<" "<<o<<endl;
            s.pb(u);
            vv.pb(o);
        }
        u=0;
        o=0;
        for(i=0,j=n-1; i<st.size(); j--, i++)
        {
            b = er[int(st[j])];
            x = bigmod(29,i,mod);
            y = bigmod(29,i,mod1);
            u = (u+((b*x)%mod))%mod;
            o = (o+((b*y)%mod1))%mod1;

            rr.pb(u);
            hh.pb(o);

        }

        n=st.size();

        l=-1;
        r=n;
        for(i=0; i<n/2; i++)
        {
            //cout<<i<<endl;
            a= s[i];
            b= vv[i];
            c=rr[i];
            d=hh[i];
           // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
            if(a==c && b==d)
            {
                f = (i+1)*2;
                l = i;
                r = n-i-1;
                //cout<<i<<endl;
                if(n%2==1 && i+1==n/2){
                        //cout<<"h"<<endl;
                    l++;
                }
            }
            else {
                    et.cl;
                    p=l;
                for(j=i;j<r;j++)et.pb(st[j]);
                e = LongestPalindromicPrefix(et);
                l = l+e;


                et.cl;
                for(j=n-i-1;j>p;j--)et.pb(st[j]);
                e = LongestPalindromicPrefix(et);
                x = r-e;

                if(l+1+n-r<p+1+n-x)l=p,r=x;

            break;
            }
        }
        //cout<<l<<" "<<r<<endl;
        q++;
       // if(q==1122)cout<<st<<endl;
        if(n==1)l=0;
        for(i=0;i<=l;i++)cout<<st[i];
        for(i=r;i<n && i>l;i++)cout<<st[i];
        cout<<endl;
        s.cl;
        vv.cl;
        rr.cl;
        hh.cl;

    }
}

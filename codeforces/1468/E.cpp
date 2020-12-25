#include<bits/stdc++.h>
using namespace std;
#define T top()
#define E end()
#define PS push
#define Q queue
#define PP pop()
#define L0 (LL)0
#define V vector
#define ST stack
#define FI first
#define MAX 4e18
#define MIN -MAX
#define DQ deque
#define SZ size()
#define C clear()
#define B begin()
#define F front()
#define SE second
#define DL double
#define G getline
#define IN insert
#define endl "\n"
#define EM empty()
#define cnn continue
#define MD 1000000007
#define PSB push_back
#define PI acos(-1.00)
#define PPB pop_back()
#define PSF push_front
#define ub upper_bound
#define lb lower_bound
#define PPF pop_front()
#define line cout<<endl
#define LL long long int
#define one cout<<1<<endl
#define zer cout<<0<<endl
#define PQ priority_queue
#define nil cout<<-1<<endl
#define N cout<<"NO"<<endl
#define Y cout<<"YES"<<endl
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define MAU cout<<"Case "<<mau<<": "
#define SP(pre) fixed<<setprecision(pre)
#pragma GCC optimization ("unroll-loops")
#define __lcm(A1,A2) (A1/(__gcd(A1,A2)))*A2
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define UOSMOY v.C;w.C;ww.C;uu.C;uo.C;vo.C;vu.C;ab.C;bc.C;cc.C;uuu.C;a.C;b.C;c.C;u.C
V<LL>v;
V<LL>w,ab,bc;
set<LL>uo;
map<LL,LL>ww,cc,u;
V<pair<LL,LL> >uu,su;
map<LL,V<LL> >uuu;
map<pair<LL,LL>,LL> vo;
map<pair<LL,LL>,LL> vu;
map<LL,pair<LL,pair<LL,LL > > > vs;
priority_queue<LL,V<LL>,greater<LL> > moy;
LL dx[]= {-1,0,1,0,1,1,-1,-1};
LL dy[]= {0,1,0,-1,-1,1,1,-1};
LL dxx[]= {2,1,-1,-2,-2,-1,1,2};
LL dyy[]= {1,2,2,1,-1,-2,-2,-1};
LL dp[101][10001];
LL ar[10][10];
int main()
{
//  BRR;
//  file;
    FAST;
    char ch;
    string a,b,c;
    DL x,y,d,e,f,g,h;
    LL n,i,j,k,p,q,o,l,s,tt=1,m,t,z,aa,r=0;
    cin>>tt;
    for(LL mau=1; mau<=tt; mau++)
    {
        UOSMOY;
        for(i=0;i<4;i++)
        {
            cin>>o;
            v.PSB(o);
        }
        sort(v.B,v.E);
        cout<<v[0]*v[2]<<endl;
    }
    return 0;
    //IN
    //AL
}

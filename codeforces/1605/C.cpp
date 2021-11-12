#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<list>
#include<iterator>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long int
#define mod 1000000007
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>newset;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,hh,vv;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll, set<ll> >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

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
        f = 0;
        for(i=0; i+1<n; i++)
        {
            if(st[i]==st[i+1] && st[i]=='a'){f=1;break;}
        }
        if(f==1){cout<<2<<endl;continue;}
        for(i=0; i+2<n; i++)
        {
            if(st[i]==st[i+2] && st[i]=='a'){f=2;break;}
        }
        if(f==2){cout<<3<<endl;continue;}
        for(i=0; i+3<n; i++)
        {
            if(st[i]==st[i+3] && st[i]=='a' && st[i+1]=='c' && st[i+2]=='b'){f=3;break;}
            if(st[i]==st[i+3] && st[i]=='a' && st[i+1]=='b' && st[i+2]=='c'){f=3;break;}
        }
        if(f==3){cout<<4<<endl;continue;}
        a = 0;
        b = 0;
        c = 0;
        for(i=0;i<n && i<7;i++){
            if(st[i]=='a')a++;
            if(st[i]=='b')b++;
            if(st[i]=='c')c++;
        }
        if(a>b && a>c)f=4;
        for(i=7,j=0;i<n;i++,j++){
            if(st[i]=='a')a++;
            if(st[i]=='b')b++;
            if(st[i]=='c')c++;

            if(st[j]=='a')a--;
            if(st[j]=='b')b--;
            if(st[j]=='c')c--;
            if(a>b && a>c){f=4;break;}
        }
        if(f==4){cout<<7<<endl;continue;}
        cout<<-1<<endl;
    }

}

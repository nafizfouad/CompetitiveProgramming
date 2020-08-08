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
    vector<ll > v,s;
    vector<string> ss,vv,pp;
    map<ll, ll > ta,pa,sa;
    map<ll,list<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    char ch;
    //ios_base::sync_with_stdio(false);
    ll ma[100010];
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    memset(ma,0,sizeof(ma));
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a);
        ma[a]++;
        if(ma[a]==2 || ma[a]==4 || ma[a]==6 || ma[a]==8)sa[ma[a]]++;
    }

    scanf("%lld",&m);
    for(i=0; i<m; i++)
    {
        cin>>ch;
        scanf("%lld",&a);

        if(ch=='+')
        {
            ma[a]++;
            if(ma[a]==2 || ma[a]==4 || ma[a]==6 || ma[a]==8)sa[ma[a]]++;
        }
        else
        {
            if(ma[a]==2 || ma[a]==4 || ma[a]==6 || ma[a]==8)sa[ma[a]]--;
            ma[a]--;
        }
        f = 0;
        if(sa[8]>=1)f=1;
        else if(sa[6]>=1 && sa[2]>=2)f=1;
        else if(sa[4]>=2)f=1;
        else if(sa[4]>=1 && sa[2]>=3)f=1;
        if(f==0)printf("NO\n");
        else printf("YES\n");
    }
}

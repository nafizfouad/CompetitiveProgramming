;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv;
vector<pair<string,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>st;
            if(st[0]=='f')cin>>a,ss.pb({st,a});
            else ss.pb({st,0LL});
        }
        c = 0;
        f = 0;
        g = 0;
        for(i=0; i<n; i++)
        {
            if(ss[i].first[0]=='a')
            {
                d = 0;
                while(ss[i].first[0]=='a')
                {
                    d++;
                    i++;
                    if(i==n)break;
                }
                i--;
                if(f==0)
                {
                    c = c+d;
                    if(c>4294967295)
                    {
                        g=1;
                        break;
                    }
                }
                else
                {
                    e = d;
                    for(j=0; j<de.size(); j++)
                    {
                        e = e*de[j];
                        if(e>4294967295)
                        {
                            g=1;
                            break;
                        }
                    }
                    if(g==1)break;
                    else c = c+e;
                    if(c>4294967295)
                    {
                        g=1;
                        break;
                    }
                }
            }
            else if(ss[i].first[0]=='e')
            {
                while(ss[i].first[0]=='e')
                {
                    i++;
                    b = ne.back();
                    if(ss[b].second!=1)de.pop_back(),f--;
                    ne.pop_back();
                    if(i==n)break;
                }
                i--;
            }
            else
            {

                while(ss[i].first[0]=='f')
                {
                    if(ss[i].second!=1)de.pb(ss[i].second),f++;
                    ne.pb(i);
                    i++;
                    if(i==n)break;
                }
                i--;
            }
        }
        if(g==1)cout<<"OVERFLOW!!!"<<endl;
        else cout<<c<<endl;
        ss.clear();
        de.clear();
        ne.clear();
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

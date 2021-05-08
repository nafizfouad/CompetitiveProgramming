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
vector<ll > ss[200005],pp;
map<char,ll > ta,pa,sa,ma;
vector<pair < pair<ll,ll>,ll> > me,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        cin>>st;

        c = 0;
        f = 0;
        for(i=0; i+1<n; i++)
        {
            if(ma[st[i]]>0)
            {
                f=1;
                break;
            }
            else
            {
                ma[st[i]]++;
                if(st[i]==st[i+1])
                {
                    while(st[i]==st[i+1])
                    {
                        i++;
                        if(i==n-1){c=1;break;}
                    }
                }
            }
        }
        if(c==0 && ma[st[n-1]]>0)f=1;
        if(f==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        ma.clear();
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;


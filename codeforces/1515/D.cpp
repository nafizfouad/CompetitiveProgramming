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
vector<ll> v,s,vv,hh;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
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
        cin>>n>>l>>r;
        p++;
        for(i=0;i<l;i++){
            cin>>a;
            ma[a]++;
        }
        for(i=0;i<r;i++){
            cin>>a;
            sa[a]++;
        }
        for(auto it = ma.begin();it!=ma.end();it++){
            a = (*it).first;
            if(sa[a]!=0){
                b = min(ma[a],sa[a]);
                ma[a]-=b;
                sa[a]-=b;
                l-=b,r-=b;
                n = n-(2*b);
            }
        }
        d = n/2;
        c =0;
        if(r<d){
                e = 0;
            for(auto it = ma.begin();it!=ma.end();it++){
                b = (*it).second/2;
                if((*it).second%2==1)v.pb((*it).first);
                if(d-r>b){
                    r = r+b;
                    sa[(*it).first]+=b;
                    ma[(*it).first]-=b;
                    c+=b;
                }
                else{
                   sa[(*it).first]+=(d-r);
                   ma[(*it).first]-=(d-r);
                   c+=(d-r);
                   r=d;
                   l=r;
                   break;
                }
            }
            for(i=0;i<v.size();i++){
                if(r==d)break;
                else r++,ma[v[i]]--,sa[v[i]]++,c++;
            }
        }
        else if(l<d){
            for(auto it = sa.begin();it!=sa.end();it++){
                b = (*it).second/2;
                if((*it).second%2==1)v.pb((*it).first);
                if(d-l>b){
                    l = l+b;
                    sa[(*it).first]-=b;
                    ma[(*it).first]+=b;
                    c+=b;
                }
                else{
                   sa[(*it).first]-=(d-l);
                   ma[(*it).first]+=(d-l);
                   c+=(d-l);
                   l = d;
                   r = l;
                   break;
                }
            }
           for(i=0;i<v.size();i++){
                if(l==d)break;
                else l++,ma[v[i]]++,sa[v[i]]--,c++;
            }

        }
        for(auto it = sa.begin();it!=sa.end();it++){
           a = (*it).second;
           b = ma[(*it).first];
           if(a>b)c+=(a-b);
        }
        cout<<c<<endl;
        sa.clear();
        ma.clear();
        v.clear();
    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

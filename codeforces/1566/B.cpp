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
vector<ld> v,s,hh;
vector<vector<ll> > ss,pp;
map<ld,ll > ta,pa,sa,ma;
map<pair<ld,ld>, ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll>li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>st;
        d = 0;
        e = 0;
        f = 0;
        for(i=0;i<st.size();i++){
            if(st[i]=='0'){
                    c=0;
                while(st[i]=='0'){
                    i++;
                    c++;
            if(i==st.size())break;
                }
                d++;
                i--;
            }
           else if(st[i]=='1'){
                    c=0;
                while(st[i]=='1'){
                    i++;
                    c++;
            if(i==st.size())break;
                }
                e++;
                i--;
            }
            else if(st[i]=='2'){
                    c=0;
                while(st[i]=='2'){
                    i++;
                    c++;
            if(i==st.size())break;
                }
                f++;
                i--;
            }
        }
        if(d==0)cout<<0<<endl;
        else if(d>1){
            if(f==0)cout<<2<<endl;
            else if(e==0)cout<<1<<endl;
            else if(d==2)cout<<2<<endl;
            else cout<<3<<endl;
        }
        else cout<<d<<endl;
    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

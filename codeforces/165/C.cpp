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
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv;
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,he,mem;
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
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        v.clear();
        cin>>st;
        c = 0;
        for(i=0;i<st.size();i++){
            if(st[i]=='1'){
                v.pb(i);
            }
        }
        if(n==0){
                d =0;
            for(i=0;i<st.size();i++){
                if(st[i]=='0'){
                        c = 0;
                    while(st[i]=='0'){
                        c++;
                        i++;
                        if(i==st.size())break;
                    }
                    d = d+((c*(c+1))/2);
                }
            }
            cout<<d<<endl;
            continue;
        }
        if(v.size()<n){cout<<0<<endl;continue;}
        d = 0;
        for(i=n-1,j=0;i<v.size();j++,i++){
            if(i==v.size()-1){
                c = (st.size())-v[i]-1;
            }
            else c = v[i+1]-v[i]-1;
            if(j==0){
                b = v[0];
            }
            else b = v[j]-v[j-1]-1;
            //cout<<c<<" "<<b<<endl;
            d = d+((c+1)*(b+1));
        }
        cout<<d<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

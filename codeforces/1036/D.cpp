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
vector<vector<ll> > ss,pp;
map<char,ll > ta,pa,sa,ma;
map<pair<ll,ll>, ll >se,me;
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
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
            c = c+a;
        }
        cin>>m;
        for(i=0;i<m;i++){
            cin>>b;
            s.pb(b);
            d = d+b;
        }
        if(c!=d)cout<<-1<<endl;
        else{
            i = 0;
            j = 0;
            f = 0;
            c = 0;
            while(i<v.size() && j<s.size()){
                    //cout<<i<<" "<<j<<" "<<f<<" "<<c<<endl;
                if(f==0){
                        e = v[i];
                        g = s[j];
                    if(v[i]==s[j]){i++,j++,c++;continue;}
                    else if(v[i]<s[j]){f=1;continue;}
                    else {f = 2;continue;}
                }
                else if(f==1){
                    while(e<g){
                        i++;
                        if(i==v.size())break;
                        e = e+v[i];
                    }
                    if(e==g){i++,j++,c++;f=0;continue;}
                    else {f=2;continue;}
                }
                else if(f==2){
                    while(e>g){
                        j++;
                        if(j==s.size())break;
                        g = g+s[j];
                    }
                    if(e==g){i++,j++,c++;f=0;continue;}
                    else {f=1;continue;}
                }
            }
            cout<<c<<endl;
        }

    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

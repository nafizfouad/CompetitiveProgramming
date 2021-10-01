;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,heh;
vector< pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>a;
            ma[a]++;
        }
        a = n;
        while(a){
            v.pb(a%10);
            a = a/10;
        }
        reverse(v.begin(),v.end());
        for(i=0;i<=9;i++)if(ma[i]==0){d=i;break;}
        for(i=0;i<v.size();i++){
            if(ma[v[i]]==1){
                if(f==1)v[i]=d;
                else{
                   for(j=v[i]+1;j<=9;j++){
                    if(ma[j]==0){f=1;v[i]=j;break;}
                   }
                   if(f==0){
                    for(j=i-1;j>=0;j--){
                        b = v[j];
                        for(k=b+1;k<=9;k++){
                            if(ma[k]==0){f=1;v[j]=k;break;}
                        }
                        if(f==1)break;
                    }
                    if(f==0){
                        if(d==0){
                            for(i=1;i<=9;i++)if(ma[i]==0){d=i;break;}
                        }
                        cout<<d;
                        for(j=0;j<v.size();j++){
                            if(ma[0]==0)cout<<0;
                            else cout<<d;
                        }
                        cout<<endl;
                        f=2;break;
                    }
                   }
                   if(f==2)break;
                }
            }
        }
        if(f!=2){
            for(i=0;i<v.size();i++)cout<<v[i];
            cout<<endl;
        }
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

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
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,he,mem;
map<string,ll>se;
string st;


int main()
{
    cin>>t;
    p = 0;
    while(t--)
    {
        p++;
        cin>>n>>m;
        
        cin>>st;
        
        f =0;
        
        for(i=0,j=st.size()-1; i<j;j--, i++)
        {
         if(st[i]=='0'){
            if(st[j]=='0' || st[j]=='?')n-=2,st[j]='0';
            else f=1;
         }
         else if(st[i]=='1'){
            if(st[j]=='1' || st[j]=='?')m-=2,st[j]='1';
            else f=1;
         }
         else {
            if(st[j]=='1')st[i]='1',m-=2;
            else if(st[j]=='0')st[i]='0',n-=2;
         }
         if(n<0 || m<0)f=1;
        }
       
       
        for(i=0,j=st.size()-1; i<j;j--, i++)
        {
         if(st[i]=='?' && st[j]=='?'){
            if(n>=2)st[i]='0', st[j]='0',n-=2;
            else if(m>=2)st[i]='1',st[j]='1',m-=2;
            else f=1;
         }
        }
        
         if(st.size()%2==1){
            if(st[st.size()/2]=='0'){
                n-=1;
            }
            else if(st[st.size()/2]=='1'){
                m-=1;
            }
            else if(n>=1)st[st.size()/2]='0',n-=1;
            else if(m>=1)st[st.size()/2]='1',m-=1;
            else f=1;
         }
         if(n!=0)f=1;
         
         if(m!=0)f=1;
         
         if(f==1)cout<<-1<<endl;
         else cout<<st<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

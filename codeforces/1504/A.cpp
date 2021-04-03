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
map<char,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,he,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
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
        cin>>st;
        c=0;
        for(i=0,j=st.size()-1; i<st.size(); j--, i++)
        {
            if(st[j]!='a')
            {
                st.insert(st.begin()+i,'a');
                c=1;
                break;
            }
        }
        if(c==0)
        {
            c = 0;
            for(i=0,j=st.size()-1; i<st.size(); j--, i++)
            {
                if(st[i]!='a')
                {
                    st.insert(st.begin()+j,'a');
                    c=1;
                    break;
                }
            }
            if(c==0)cout<<"NO"<<endl;
            else {cout<<"YES"<<endl;cout<<st<<endl;}
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<st<<endl;
        }
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

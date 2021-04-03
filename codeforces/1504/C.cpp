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
        cin>>n;
        cin>>st;
        et.clear(),ft.clear(),de.clear(),ne.clear();
        c = 0;
        d = 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='0')c++;
            else d++;
        }
        if(c%2==1 || d%2==1 || st[0]=='0' ||  st[st.size()-1]=='0')cout<<"NO"<<endl;
        else
        {
            c = 0;
            d = d/2;
            for(i=0; i<st.size(); i++)
            {
                if(st[i]=='1')
                {
                    if(d<=0)
                    {
                        et.pb(')');
                        ft.pb(')');
                    }
                    else
                    {
                        et.pb('(');
                        ft.pb('(');
                        d--;
                    }
                }
                else
                {
                    if(c%2==0)et.pb('('),ft.pb(')');
                    else et.pb(')'),ft.pb('(');
                    c++;
                }
            }
            de.clear();
            ne.clear();
            f = 0;
            for(i=0;i<st.size();i++){
                if(et[i]=='(')de.pb('(');
                else if(de.size()==0){f=1;break;}
                else de.pop_back();
                if(ft[i]=='(')ne.pb('(');
                else if(ne.size()==0){f=1;break;}
                else ne.pop_back();
            }
            if(f==1)cout<<"NO"<<endl;
            else {cout<<"YES"<<endl;cout<<et<<endl;cout<<ft<<endl;}
        }
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

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

ll ar[1000005],br[1000005];

int main()
{
    fast;
    cin>>t;
    p = 0;
    while(t--)
    {
        v.clear();
        vv.clear();
        hh.clear();
        ss.clear();
        cin>>n;
        cin>>st;
        c = 0;
        d = 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='.')c++;
            ar[i]=c;
            if(st[i]=='*')d++;
            br[i]=d;
        }
        c = 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='*')
            {
                e=i;
                break;
            }
        }
        for(i=e; i<st.size(); i++)
        {
            if(st[i]=='*')
            {
                d = 0;
                g= i;
                while(st[i]=='*')
                {
                    i++;
                    d++;
                    if(i==st.size())break;
                }
                i--;
               if(v.size()>0) f = v[v.size()-1]+(d*c);
               else f=0;
                v.pb(f);
                ss.pb({g,d});
            }
            else if(st[i]=='.')
            {
                while(st[i]=='.')
                {
                    i++;
                    c++;
                    if(i==st.size())break;
                }
                i--;
            }

        }
        for(i=0; i<ss.size(); i++)
        {
            c = v[v.size()-1]-v[i];
            d = ar[ss[i].first]-ar[ss[0].first];
            e = br[n-1]-br[ss[i].first]-(ss[i].second-1);
            c = c-(d*e);
            vv.pb(c);
        }
        v.clear();
        ss.clear();
        reverse(st.begin(),st.end());
        c = 0;
        d = 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='.')c++;
            ar[i]=c;
            if(st[i]=='*')d++;
            br[i]=d;
        }
        c = 0;
        for(i=0; i<st.size(); i++)
        {
            if(st[i]=='*')
            {
                e=i;
                break;
            }
        }
        for(i=e; i<st.size(); i++)
        {
            if(st[i]=='*')
            {
                d = 0;
                g= i;
                while(st[i]=='*')
                {
                    i++;
                    d++;
                    if(i==st.size())break;
                }
                i--;
                if(v.size()>0)f = v[v.size()-1]+(d*c);
                else f=0;
                v.pb(f);
                ss.pb({g,d});
            }
            else if(st[i]=='.')
            {
                while(st[i]=='.')
                {
                    i++;
                    c++;
                    if(i==st.size())break;
                }
                i--;
            }

        }
       // for(i=0;i<v.size();i++)cout<<v[i]<<" ";
        //cout<<endl;
        for(i=0; i<ss.size(); i++)
        {
            c = v[v.size()-1]-v[i];
            d = ar[ss[i].first]-ar[ss[0].first];
            e = br[n-1]-br[ss[i].first]-(ss[i].second-1);
            c = c-(d*e);
            hh.pb(c);
        }
        if(hh.size()>0)reverse(hh.begin(),hh.end());
        c = 1e18;

        for(i=0; i<hh.size(); i++)
        {
            d = hh[i]+vv[i];
           // cout<<vv[i]<<" "<<hh[i]<<endl;
            c = min(c,d);
        }
        if(c==1e18)c=0;
        cout<<c<<endl;

    }
}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;


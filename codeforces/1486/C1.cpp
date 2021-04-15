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
vector<ll> v[100005],s,vv;
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
vector<ll> vi(100004),he(100004);
ll bfs(ll a)
{

    ll i,j,k,b,c,d,l,m,f;
    queue <ll> q;

    q.push(a);
    vi[a] = 0;
    f = 0;
    while(q.size()>0)
    {
        d = q.front();
        e = vv[d-1];
        c = 0;
        s.clear();
        ss.clear();
        for(i=0; i<v[d].size(); i++)
        {
            if(vi[v[d][i]]==0)
            {
                vi[v[d][i]]= 1;
                s.pb(v[d][i]);
                if(vv[v[d][i]-1]!=e)c++;
                q.push(v[d][i]);
                f++;
            }
            else ss.pb(v[d][i]);
        }
        if(c>=1)for(i=0; i<ss.size(); i++)he[ss[i]]=-1;
        if(c>=2)for(i=0; i<s.size(); i++)he[s[i]]=-1;
        q.pop();
    }

    return f;
}


int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n;
        l = 1;
        r=n;
        f = -1;
        while(1)
        {
            cout<<"? "<<l<<" "<<r<<endl;
            cin>>a;
            if(l==r-1 && a==l){f=r;break;}
            else if(l==r-1 && a==r){f=l;break;}
            if(l!=a && a!=r)
            {
                cout<<"? "<<l<<" "<<a<<endl;
                cin>>b;
                if(a==b)r=a;
                else l = a;
            }
            m = (l+r)/2;
            if(l==a)
            {
                if(l!=m)
                {
                    cout<<"? "<<l<<" "<<m<<endl;
                    cin>>c;
                    if(c!=a)l=m+1;
                    else r=m,l++;
                }
                else l++;
            }
            else
            {
                if(m!=r)
                {
                    cout<<"? "<<m<<" "<<r<<endl;
                    cin>>c;
                    if(c!=a)r=m-1;
                    else l = m,r--;
                }
                else r--;
            }
            if(l==r)break;
        }
        if(f!=-1)cout<<"! "<<f<<endl;
        else cout<<"! "<<l<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

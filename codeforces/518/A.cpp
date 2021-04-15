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
        if(c>=1)for(i=0;i<ss.size();i++)he[ss[i]]=-1;
        if(c>=2)for(i=0;i<s.size();i++)he[s[i]]=-1;
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
        p++;
        cin>>st;
        cin>>et;
        f = 0;
        g = 0;
        h = 0;
        for(i=0;i<st.size();i++){
            if(st[i]<et[i]){

                b = int(et[i])-int(st[i]);
                d = i;
                if(b>1){f=2;break;}
                if(i==st.size()-1){f=1;break;}
                for(j=i+1;j<st.size();j++){
                    if(st[j]!='z'){g=1;x=j;break;}
                }
                for(j=i+1;j<st.size();j++){
                    if(et[j]!='a'){h=1;y=j;break;}
                }
                break;
            }
        }
        if(f==1)cout<<"No such string"<<endl;
        else if(f==2){
            for(i=0;i<d;i++)cout<<st[i];
            cout<<char(st[i]+1);
            for(i=d+1;i<st.size();i++)cout<<st[i];
            cout<<endl;
        }
        else if(g==1){
            for(i=0;i<x;i++)cout<<st[i];
            cout<<'z';
            for(i=x+1;i<st.size();i++)cout<<st[i];
            cout<<endl;
        }
        else if(h==1){
            for(i=0;i<y;i++)cout<<et[i];
            cout<<'a';
            for(i=y+1;i<st.size();i++)cout<<et[i];
            cout<<endl;
        }
        else cout<<"No such string"<<endl;
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

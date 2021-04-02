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
vector<ll> v[200],s,vv;
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,he,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll bfs(ll a)
{

    ll i,j,k,b,c,d,l,m,f;
    queue <ll> q;
    q.push(a);
    s[a] = 1;
    vv[a] = 1;
    ss.pb(a);
    f = 0;
    while(q.size()>0)
    {
        d = q.front();
        for(i=0; i<v[d].size(); i++)
        {
            if(s[v[d][i]]==0)
            {
                s[v[d][i]]= 1;
                vv[v[d][i]]= d;
                q.push(v[d][i]);
            }
            else if(vv[d]!=v[d][i])
            {
                f=1;
                break;
            }
        }
        if(f==1)break;
        q.pop();
    }

    return f;
}

int main()
{
    fast;
    cin>>t;
    p = 0;
    while(t--)
    {
        me.clear();
        vv.clear();
        s.clear();
        de.clear();
        ma.clear();
        for(i=0; i<150; i++)v[i].clear(),vv.pb(0),s.pb(0);

        cin>>st;
        f = 0;
        for(i=0; i+1<st.size(); i++)
        {
            c = int(st[i]);
            d = int(st[i+1]);
            me[ {c,d}]++;
            me[ {d,c}]++;
            if(me[ {c,d}]<2 && me[ {d,c}]<2)
            {
                v[c].pb(d);
                v[d].pb(c);
            }
            if(v[c].size()>2 || v[d].size()>2)
            {
                f=1;
                break;
            }
        }
        if(st.size()==1)
        {
            cout<<"YES"<<endl;
            for(char ch='a'; ch<='z'; ch++)cout<<ch;
            cout<<endl;
        }
        else if(f==1)cout<<"NO"<<endl;
        else
        {
            d = bfs(c);
            if(d==1)cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(i=97; i<=122; i++)
                {
                    if(v[i].size()==1)
                    {
                        de.pb(v[i][0]);
                        de.pf(i);
                        me[ {de[0],de[1]}]=0;
                        me[ {de[1],de[0]}]=0;
                        break;
                    }
                }
                while(1)
                {
                    a = de.back();
                    f = 0;
                    if(me[ {a,v[a][0]}]!=0)
                        {
                            de.pb(v[a][0]);
                            f = 1;
                            me[ {de[de.size()-2],de[de.size()-1]}]=0;
                            me[ {de[de.size()-1],de[de.size()-2]}]=0;
                        }
                    if(v[a].size()==2)
                    {
                        if(me[ {a,v[a][1]}]!=0)
                        {
                            de.pb(v[a][1]);
                            f = 1;
                            me[ {de[de.size()-2],de[de.size()-1]}]=0;
                            me[ {de[de.size()-1],de[de.size()-2]}]=0;
                        }
                    }
                    if(f==0)break;
                }
                for(i=0;i<de.size();i++)cout<<char(de[i]),ma[de[i]]++;
                for(i=97;i<=122;i++)if(ma[i]==0)cout<<char(i);
                cout<<endl;

            }
        }
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

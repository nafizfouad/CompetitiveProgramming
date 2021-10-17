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
#include<math.h>
#include<list>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv[200005];
vector<pair<ll,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

class Graph
{
    ll V;
    list<ll>* kir;

public:
    Graph(ll V);
    void add(ll u, ll v);
    void topo();
};
Graph::Graph(ll V)
{
    this->V = V;
    kir = new list<ll>[V];
}
void Graph::add(ll u, ll v)
{
    kir[u].push_back(v);
}
void Graph::topo()
{
    vector<ll> in(V, 0);
    for (ll u = 0; u < V; u++)
    {
        for (auto it = kir[u].begin(); it != kir[u].end(); it++)
        {
            in[*it]++;
        }
    }
    multiset<ll> s;
    for (ll i = 0; i < V; i++)
    {
        if (in[i] == 0)
        {
            s.insert(i);
        }
    }

    vector<ll> to;
    ll cn = 0;
    while (!s.empty())
    {
        int u = *s.begin();
        s.erase(s.begin());
        to.push_back(u);

        for (auto it = kir[u].begin(); it != kir[u].end(); it++)
        {
            if (--in[*it] == 0)
            {
                s.insert(*it);
            }
        }
        cn++;

    }
    if (cn != V) {
        cout << -1<<endl;
        return;
    }

    for (ll i = 1; i < to.size(); i++)
    {
        cout << to[i] << " ";
    }
    cout<<endl;
}

int main()
{
    fast;
    //cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            if(me[{a,b}]==0){
            ss.pb({a,b}),me[{a,b}]++;}
        }

        Graph gr(n+1);
        for(i=0; i<ss.size(); i++)
        {
            gr.add(ss[i].first, ss[i].second);
        }
        gr.topo();
    }
}


;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

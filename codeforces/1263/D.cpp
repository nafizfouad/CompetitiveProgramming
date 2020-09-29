#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

vector<string> sst;
map<char,vector<ll> > me;
map<ll,ll> sett;
ll vis[150];

ll bfs(char ch)
{
    ll i,j,k,b,c,d,l,m,f;
    queue <char> q;
    vector<ll> vi(2020);
    q.push(ch);
    vis[int(ch)] = 1;
    f = 0;
    while(q.size()>0)
    {
        char dh = q.front();
        for(i=0; i<me[dh].size(); i++)
        {
            c = me[dh][i];
            if(sett[c]==0)
            {
                for(j=0; j<sst[c].size(); j++)
                {
                    if(vis[int(sst[c][j])]==0)
                    {
                        q.push(sst[c][j]);
                        vis[int(sst[c][j])]=1;
                    }
                }
                sett[c]=1;
            }
        }
        q.pop();
    }
}

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk;
    vector<ll > v,s;
    vector<ll >ss;
    map<ll,ll> sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>st;
        sst.pb(st);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<sst[i].size(); j++)
        {
            me[sst[i][j]].pb(i);
        }
    }
    c = 0;
    for(char ch='a'; ch<='z'; ch++)
    {
        if(me[ch].size()!=0 && vis[int(ch)]==0)
        {
            bfs(ch);
            c++;
        }
    }
    cout<<c<<endl;
}


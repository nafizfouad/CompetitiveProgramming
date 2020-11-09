#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<string.h>
#include<stdio.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

ll sa[1501][1501],ma[1501][1501];
int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    vector< pair<ll,ll> > ss;
    map<ll,vector<ll> > me;
    map<pair<ll,ll >,ll > pa,ta;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>r>>l>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        ma[a][b] = 1;
    }
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        sa[a][b] = 1;
    }
    d = 0;
    for(i=1; i<=r; i++)
    {
        c = 0;
        f = 0;
        for(j=1; j<=l; j++)
        {
            if(ma[i][j]==1)
            {
                c++;
                d = d+c;
                for(k=j-1; k>=1; k--)
                {
                    if(sa[ i][k]==1)break;
                    else if(ma[i][k]==1)break;
                    else ta[ {i,k}]=1;
                }
                ta[ {i,j}] = 1;
                c = 0;
                f = 1;
            }
            else if(sa[ i][j]==1)
            {
                if(f==1)
                {
                    d = d+c;
                    for(k=j-1; k>=1; k--)
                    {
                        if(ma[i][k]==1)break;
                        else ta[ {i,k}]=1;
                    }
                }
                f = 0;
                c = 0;
            }
            else
            {
                c++;
            }
        }
        if(f==1)
        {
            d=d+c;
            for(k=l; k>=1; k--)
            {
                if(ma[i][k]==1)break;
                else ta[ {i,k}]=1;
            }
        }
    }
    for(i=1; i<=l; i++)
    {
        c = 0,f=0;
        for(j=1; j<=r; j++)
        {
            if(ma[j][i]==1)
            {
                d = d+c;
                for(k=j-1; k>=1; k--)
                {
                    if(sa[ k][i]==1)break;
                    else if(ma[ k][i]==1)break;
                    else ta[ {k,i}]=1;
                }
                c = 0;
                f = 1;
            }
            else if(sa[ j][i]==1)
            {
                if(f==1)
                {
                    d = d+c;
                    for(k=j-1; k>=1; k--)
                    {
                        if(ma[k][i]==1)break;
                        else ta[ {k,i}]=1;
                    }
                }
                f = 0;
                c = 0;
            }
            else
            {
                if(ta[ {j,i}]==0)c++;
            }
        }
        if(f==1){d=d+c;for(k=r; k>=1; k--)
            {
                if(ma[k][i]==1)break;
                else ta[ {k,i}]=1;
            }}
    }
    cout<<d<<endl;
}


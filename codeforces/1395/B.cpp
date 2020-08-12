#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    map<ll, ll > ta,pa,sa,ma;
    map<ll,vector<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n>>m>>a>>b;
    r = a;
    c = b;
    for(j=b; j>=1; j--)
    {
        cout<<a<<" "<<j<<endl;
    }
    a--;
    f = 0;
    while(1)
    {

        for(i=1; i<=m; i++)
        {
            cout<<a<<" "<<i<<endl;
        }
        if(a==1)
        {
            for(i=m; i>b; i--)
            {
                cout<<r<<" "<<i<<endl;
            }
            for(i=b+1; i<=m; i++)
            {
                cout<<r+1<<" "<<i<<endl;
            }
            for(i=b; i>=1; i--)
            {
                cout<<r+1<<" "<<i<<endl;
            }
            f = 1;
            break;
        }
        else
        {
            a--;
            for(i=m; i>=1; i--)
            {
                cout<<a<<" "<<i<<endl;
            }
            if(a==1)
            {
                for(i=1;i<=m;i++){
                    cout<<r+1<<" "<<i<<endl;
                }
                for(i=m;i>b;i--){
                    cout<<r<<" "<<i<<endl;
                }
                f = 2;
                break;
            }
            else
            {
                a--;
            }
        }
    }
    if(f==1)
    {
        a = r+2;
        if(a<=n)
        {
            while(1)
            {
                for(i=1; i<=m; i++)
                {
                    cout<<a<<" "<<i<<endl;
                }
                if(a==n)break;
                a++;
                for(i=m; i>=1; i--)
                {
                    cout<<a<<" "<<i<<endl;
                }
                if(a==n)break;
                a++;
            }
        }
    }
    else if(f==2){
        a = r+2;
        if(a<=n){
           for(i=b+1; i<=m; i++)
                {
                    cout<<a<<" "<<i<<endl;
                }
            for(i=b; i>=1; i--)
                {
                    cout<<a<<" "<<i<<endl;
                }
                a++;
        }
        if(a<=n)
        {
            while(1)
            {
                for(i=1; i<=m; i++)
                {
                    cout<<a<<" "<<i<<endl;
                }
                if(a==n)break;
                a++;
                for(i=m; i>=1; i--)
                {
                    cout<<a<<" "<<i<<endl;
                }
                if(a==n)break;
                a++;
            }
        }
    }
}

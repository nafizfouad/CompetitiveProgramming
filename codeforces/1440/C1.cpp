#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<string > v,s,vv;
    vector<pair< pair<ll,ll>,ll > > ss,pp;
    map<ll,vector<ll> > me;
    map<pair<ll,ll>,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        v.clear();
        for(j=0; j<n; j++)
        {
            cin>>st;
            v.pb(st);
        }
        x = n,y=m;
        if(n%2==1)x=n-1;
        if(m%2==1)y=m-1;
        p = 0;
        q = 0;
        f = 0;
        for(l=1; l<=x/2; l++)
        {
            for(z=1; z<=y/2; z++)
            {
                c = 0;
                ss.clear();
                for(j=1,h=p; j<=2; j++,h++)
                {
                    for(k=1,r=q; k<=2; r++, k++)
                    {
                        if(v[h][r]=='1')c++,ss.pb({{h,r},1});
                        else ss.pb({{h,r},0});
                    }
                }
                if(c==4){
                    f = f+4;
                    pp.pb(ss[0]);pp.pb(ss[1]);
                    pp.pb(ss[3]);pp.pb(ss[1]);
                    pp.pb(ss[2]);pp.pb(ss[3]);
                    pp.pb(ss[0]);pp.pb(ss[2]);
                    pp.pb(ss[3]);pp.pb(ss[0]);
                    pp.pb(ss[1]);pp.pb(ss[2]);
                }
                else if(c==3){
                    f++;
                    if(ss[0].second==1)pp.pb(ss[0]);
                    if(ss[1].second==1)pp.pb(ss[1]);
                    if(ss[2].second==1)pp.pb(ss[2]);
                    if(ss[3].second==1)pp.pb(ss[3]);
                }
                else if(c==2){
                    f = f+2;
                    ll a1=-1,a2=-1,a3=-1,a4=-1;
                    if(ss[0].second==0)pp.pb(ss[0]),ss[0].second=1,a1=0;
                    if(ss[1].second==0)pp.pb(ss[1]),ss[1].second=1,a2=1;
                    if(ss[2].second==0)pp.pb(ss[2]),ss[2].second=1,a3=2;
                    if(ss[3].second==0)pp.pb(ss[3]),ss[3].second=1,a4=3;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1 && i!=a1 && i!=a2 && i!=a3 && i!=a4){
                            ss[i].second = 0;
                            pp.pb(ss[i]);break;
                        }
                    }
                    if(ss[0].second==1)pp.pb(ss[0]);
                    if(ss[1].second==1)pp.pb(ss[1]);
                    if(ss[2].second==1)pp.pb(ss[2]);
                    if(ss[3].second==1)pp.pb(ss[3]);
                }
                else if(c==1){
                    f = f+3;
                    ll a5=-1,a6=0;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1){
                            ss[i].second = 0;
                            a5=i;
                            pp.pb(ss[i]);break;
                        }
                    }
                    for(i=0;i<4;i++){
                        if(ss[i].second==0 && i!=a5 && a6<2){
                            ss[i].second = 1;
                            pp.pb(ss[i]);
                            a6++;
                        }
                    }
                    ll a1=-1,a2=-1,a3=-1,a4=-1;
                    if(ss[0].second==0)pp.pb(ss[0]),ss[0].second=1,a1=0;
                    if(ss[1].second==0)pp.pb(ss[1]),ss[1].second=1,a2=1;
                    if(ss[2].second==0)pp.pb(ss[2]),ss[2].second=1,a3=2;
                    if(ss[3].second==0)pp.pb(ss[3]),ss[3].second=1,a4=3;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1 && i!=a1 && i!=a2 && i!=a3 && i!=a4){
                            ss[i].second = 0;
                            pp.pb(ss[i]);break;
                        }
                    }
                    if(ss[0].second==1)pp.pb(ss[0]);
                    if(ss[1].second==1)pp.pb(ss[1]);
                    if(ss[2].second==1)pp.pb(ss[2]);
                    if(ss[3].second==1)pp.pb(ss[3]);

                }
                q = q+2;
            }
            p = p+2;
            q = 0;
        }
        p = 0;
        q = 0;
        for(l=1; l<=x/2; l++)
        {
            for(z=1; z<=y/2; z++)
            {
        for(j=1,h=p; j<=2; j++,h++)
                {
                    for(k=1,r=q; k<=2; r++, k++)
                    {
                        v[h][r] = '0';
                    }
                }
                q = q+2;
            }
            q = 0;
            p = p+2;
         }
         //cout<<"h"<<endl;
        if(n%2==1){
                p = n-2;
                q = 0;
        for(z=1; z<=y/2; z++)
            {
                c = 0;
                ss.clear();
                for(j=1,h=p; j<=2; j++,h++)
                {
                    for(k=1,r=q; k<=2; r++, k++)
                    {
                        if(v[h][r]=='1')c++,ss.pb({{h,r},1});
                        else ss.pb({{h,r},0});
                    }
                }
               // cout<<c<<endl;
                if(c==2){
                    f = f+2;
                    ll a1=-1,a2=-1,a3=-1,a4=-1;
                    if(ss[0].second==0)pp.pb(ss[0]),ss[0].second=1,a1=0;
                    if(ss[1].second==0)pp.pb(ss[1]),ss[1].second=1,a2=1;
                    if(ss[2].second==0)pp.pb(ss[2]),ss[2].second=1,a3=2;
                    if(ss[3].second==0)pp.pb(ss[3]),ss[3].second=1,a4=3;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1 && i!=a1 && i!=a2 && i!=a3 && i!=a4){
                            ss[i].second = 0;
                            pp.pb(ss[i]);break;
                        }
                    }
                    if(ss[0].second==1)pp.pb(ss[0]);
                    if(ss[1].second==1)pp.pb(ss[1]);
                    if(ss[2].second==1)pp.pb(ss[2]);
                    if(ss[3].second==1)pp.pb(ss[3]);
                }
                else if(c==1){
                    f = f+3;
                    ll a5=-1,a6=0;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1){
                            ss[i].second = 0;
                            a5=i;
                            pp.pb(ss[i]);break;
                        }
                    }
                    for(i=0;i<4;i++){
                        if(ss[i].second==0 && i!=a5 && a6<2){
                            ss[i].second = 1;
                            pp.pb(ss[i]);
                            a6++;
                        }
                    }
                    ll a1=-1,a2=-1,a3=-1,a4=-1;
                    if(ss[0].second==0)pp.pb(ss[0]),ss[0].second=1,a1=0;
                    if(ss[1].second==0)pp.pb(ss[1]),ss[1].second=1,a2=1;
                    if(ss[2].second==0)pp.pb(ss[2]),ss[2].second=1,a3=2;
                    if(ss[3].second==0)pp.pb(ss[3]),ss[3].second=1,a4=3;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1 && i!=a1 && i!=a2 && i!=a3 && i!=a4){
                            ss[i].second = 0;
                            pp.pb(ss[i]);break;
                        }
                    }
                    if(ss[0].second==1)pp.pb(ss[0]);
                    if(ss[1].second==1)pp.pb(ss[1]);
                    if(ss[2].second==1)pp.pb(ss[2]);
                    if(ss[3].second==1)pp.pb(ss[3]);

                }
                q = q+2;
            }
        }
        //cout<<"he"<<endl;
        if(m%2==1){
                p = 0;
        q = m-2;
        for(l=1;l<=(x/2);l++){
             c = 0;
                ss.clear();
                for(j=1,h=p; j<=2; j++,h++)
                {
                    for(k=1,r=q; k<=2; r++, k++)
                    {
                        if(v[h][r]=='1')c++,ss.pb({{h,r},1});
                        else ss.pb({{h,r},0});
                    }
                }
                if(c==2){
                    f = f+2;
                    ll a1=-1,a2=-1,a3=-1,a4=-1;
                    if(ss[0].second==0)pp.pb(ss[0]),ss[0].second=1,a1=0;
                    if(ss[1].second==0)pp.pb(ss[1]),ss[1].second=1,a2=1;
                    if(ss[2].second==0)pp.pb(ss[2]),ss[2].second=1,a3=2;
                    if(ss[3].second==0)pp.pb(ss[3]),ss[3].second=1,a4=3;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1 && i!=a1 && i!=a2 && i!=a3 && i!=a4){
                            ss[i].second = 0;
                            pp.pb(ss[i]);break;
                        }
                    }
                    if(ss[0].second==1)pp.pb(ss[0]);
                    if(ss[1].second==1)pp.pb(ss[1]);
                    if(ss[2].second==1)pp.pb(ss[2]);
                    if(ss[3].second==1)pp.pb(ss[3]);
                }
                else if(c==1){
                    f = f+3;
                    ll a5=-1,a6=0;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1){
                            ss[i].second = 0;
                            a5=i;
                            pp.pb(ss[i]);break;
                        }
                    }
                    for(i=0;i<4;i++){
                        if(ss[i].second==0 && i!=a5 && a6<2){
                            ss[i].second = 1;
                            pp.pb(ss[i]);
                            a6++;
                        }
                    }
                    ll a1=-1,a2=-1,a3=-1,a4=-1;
                    if(ss[0].second==0)pp.pb(ss[0]),ss[0].second=1,a1=0;
                    if(ss[1].second==0)pp.pb(ss[1]),ss[1].second=1,a2=1;
                    if(ss[2].second==0)pp.pb(ss[2]),ss[2].second=1,a3=2;
                    if(ss[3].second==0)pp.pb(ss[3]),ss[3].second=1,a4=3;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1 && i!=a1 && i!=a2 && i!=a3 && i!=a4){
                            ss[i].second = 0;
                            pp.pb(ss[i]);break;
                        }
                    }
                    if(ss[0].second==1)pp.pb(ss[0]);
                    if(ss[1].second==1)pp.pb(ss[1]);
                    if(ss[2].second==1)pp.pb(ss[2]);
                    if(ss[3].second==1)pp.pb(ss[3]);

                }
                p = p+2;
        }
        }
        //cout<<"heh"<<endl;
        if(m%2==1 && n%2==1){
            c = 0;
                ss.clear();
                p = n-2,q=m-2;
                v[n-2][m-2]='0';
                v[n-2][m-1]='0';
                v[n-1][m-2]='0';
                for(j=1,h=p; j<=2; j++,h++)
                {
                    for(k=1,r=q; k<=2; r++, k++)
                    {
                        if(v[h][r]=='1')c++,ss.pb({{h,r},1});
                        else ss.pb({{h,r},0});
                    }
                }
                if(c==1){
                    f = f+3;
                    ll a5=-1,a6=0;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1){
                            ss[i].second = 0;
                            a5=i;
                            pp.pb(ss[i]);break;
                        }
                    }
                    for(i=0;i<4;i++){
                        if(ss[i].second==0 && i!=a5 && a6<2){
                            ss[i].second = 1;
                            pp.pb(ss[i]);
                            a6++;
                        }
                    }
                    ll a1=-1,a2=-1,a3=-1,a4=-1;
                    if(ss[0].second==0)pp.pb(ss[0]),ss[0].second=1,a1=0;
                    if(ss[1].second==0)pp.pb(ss[1]),ss[1].second=1,a2=1;
                    if(ss[2].second==0)pp.pb(ss[2]),ss[2].second=1,a3=2;
                    if(ss[3].second==0)pp.pb(ss[3]),ss[3].second=1,a4=3;
                    for(i=0;i<4;i++){
                        if(ss[i].second==1 && i!=a1 && i!=a2 && i!=a3 && i!=a4){
                            ss[i].second = 0;
                            pp.pb(ss[i]);break;
                        }
                    }
                    if(ss[0].second==1)pp.pb(ss[0]);
                    if(ss[1].second==1)pp.pb(ss[1]);
                    if(ss[2].second==1)pp.pb(ss[2]);
                    if(ss[3].second==1)pp.pb(ss[3]);

                }
        }
        cout<<f<<endl;
        i = 0;
        for(j=0;j<f;j++){
            for(k=1;k<=3;k++){
                cout<<pp[i].first.first+1<<" "<<pp[i].first.second+1<<" ";
                i++;
            }
            cout<<endl;
        }
        ss.clear();
        pp.clear();
        v.clear();
    }
}

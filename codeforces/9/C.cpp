#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pii acos(-1)
#define fo(i0n) for(i=0;i<n;i++)
#define fo(i1n) for(i=1;i<=n;i++)
#define fo(j0n) for(j=0;j<n;j++)
#define fo(j1n) for(j=1;j<=n;j++)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define pf push_front
#define pu push
#define bg begin
#define en end
using namespace std;

int main()
{
    fast();
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,g,x,y,l;
    ld bb,cc,aa;
    string st,et,ft;
    priority_queue<ll > pq,aq,dq;
    map<char,ll> ma,ta,sa;
    set<ll> se,pe,me;
    vector<ll > vv,v,s,ss;

    c = 0;
    d = 0;
    e = 0;

    cin>>n;
    m =n;
    stringstream pi;
    pi<<m;
    pi>>ft;
    f =0;
    d = 0;
    g = 0;
    for(i=0;i<ft.size();i++){
        if(ft[i]=='1')g++;
    }
    for(i=0;i<ft.size();i++){
        if(ft[i]!='1' && ft[i]!='0'){
            for(j=i;j<ft.size();j++){
                ft[j] = '1';
            }
            f = 1;
        }
    }
    c = ft.size();
    //if(g==c){d=1;}
   //cout<<g<<" "<<c<<endl;
    stringstream si;
    si<<ft;
    si>>m;
    if(f==1)n = m;
    ft.clear();
     stringstream ssi;
    ssi<<m;
    ssi>>ft;
    for(i=0;i<ft.size();i++){
        ma[ft[i]] = 1;
    }
  //  if(ma.size()==1){d=1;}
    for(i=0;; i++)
    {
        bb = pow(10,i);
        a =bb;
        if(a%10==9)a++;
        if(a>n)break;
        d = d+pow(2,i);
    }
    a = a/10;
    d = d-(pow(2,i-1));
    d++;
    //cout<<a<<" "<<d<<endl;
    for(i=1;; i++)
    {
        et.clear();
        //cout<<d<<" "<<a<<endl;
        if(a==n)
        {
            break;
        }
        else
        {
            b = a;
            c = b%10;
            if(c==0)
            {
                a=a+1;
                d++;
                if(a==n)break;
               // else if(a==n && i==1){d++;break;}
            }
            else if(c==1)
            {
                e = 0;
                while(b%10==1)
                {
                    b = b/10;
                    e++;
                }
                d++;
                for(j=1; j<e; j++)et.push_back('8');
                et.push_back('9');
                stringstream ss;
                ss<<et;
                ss>>f;
               // cout<<f<<" hehe "<<a<<endl;
                a= a+f;
                et.clear();
                if(a==n)break;
            }
        }
    }
    cout<<d<<endl;
}

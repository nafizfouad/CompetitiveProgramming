#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc;
    vector<ll > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)cout<<"FastestFinger"<<endl;
        else if(n%2==1)cout<<"Ashishgup"<<endl;
        else{
                f = 0;
            for(i=2;i*i<=n;i++){
                if(n%i==0){
                    b = n/i;
                    c = i;
                    if(b%2==0 && c%2==1 && b!=2){f=1;break;}
                   else if(b%2==1 && c%2==0 && c!=2){f=1;break;}
                }
            }
           if(f==1 || n==2)cout<<"Ashishgup"<<endl;
           else cout<<"FastestFinger"<<endl;
        }
    }

}


#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s,vv;
    map<ll,pair<ll,ll> > me;
    map<ll,ll > sa,ta,pa;
    //map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    v.pb(4);
    v.pb(8);
    v.pb(15);
    v.pb(16);
    v.pb(23);
    v.pb(42);
    ll ar[8];
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){c = v[j]*v[i];
            if(j<i){
              me[c]= {v[j],v[i]};
            }
            else{
                me[c]= {v[i],v[j]};
            }
        }
    }
    cout<<"? 1 3"<<endl;
    cin>>n;
    a = me[n].first;
    b = me[n].second;
    cout<<"? 3 4"<<endl;
    cin>>n;
    c = me[n].first;
    d = me[n].second;
    if(a==c){
        ar[1]= b;
        ar[3]= a;
        ar[4]= d;
    }
    else if(a==d){
        ar[1]=b;
        ar[3]=a;
        ar[4]=c;
    }
    else if(b==d){
        ar[1]=a;
        ar[3]=b;
        ar[4]=c;
    }
    else if(b==c){
        ar[1]=a;
        ar[3]=b;
        ar[4]=d;
    }

    cout<<"? 2 5"<<endl;
    cin>>n;
    a = me[n].first;
    b = me[n].second;
    cout<<"? 5 6"<<endl;
    cin>>n;
    c = me[n].first;
    d = me[n].second;
    if(a==c){
        ar[2]= b;
        ar[5]= a;
        ar[6]= d;
    }
    else if(a==d){
        ar[2]=b;
        ar[5]=a;
        ar[6]=c;
    }
    else if(b==d){
        ar[2]=a;
        ar[5]=b;
        ar[6]=c;
    }
    else if(b==c){
        ar[2]=a;
        ar[5]=b;
        ar[6]=d;
    }
    cout<<"! ";
    for(i=1;i<=6;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

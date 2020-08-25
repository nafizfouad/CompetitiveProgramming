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
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,ft,pt,ct;
    char et[100010];
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    for(j=1; j<=t; j++)
    {
        cin>>st;
        cin>>n;
        for(i=0;i<st.size();i++)et[i]='3';

        for(i=0;i<st.size();i++){
            if(st[i]=='0'){
                    f = 0;
                if(i-n>=0){
                    et[i-n]='0';
            f = 1;
                   // cout<<i<<" heh"<<endl;
                }
                if(i+n<st.size()){
                    et[i+n]='0';
                    f = 2;
                  //  cout<<i<<" h"<<endl;
                }
                if(f==0)et[i]='0';
            }
        }
        f = 0;
        d = 0;
        for(i=0;i<st.size();i++){
                f = 0;
            if(st[i]=='1'){
                if(i-n<0 && i+n>st.size()){d=1;break;}
                if(i-n>=0){
                    if(et[i-n]!='0'){et[i-n]='1';f=1;}
                }
                if(i+n<st.size()){
                    if(et[i+n]!='0'){et[i+n]='1';f=2;}
                }
                //cout<<i<<" he "<<f<<endl;
                if(f==0){d=1;break;}
            }
        }
        if(d==1)cout<<-1<<endl;
        else{
        for(i=0;i<st.size();i++){
            cout<<et[i];
            et[i]='-1';
        }
        cout<<endl;}
    }

}

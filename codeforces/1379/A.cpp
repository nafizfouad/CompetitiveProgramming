#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

ll check(string st,ll n){
ll i,j,c,d;
d = 0;
for(i=0;i+6<n;i++){
            if(st[i]=='a'){
                    c = 0;
                if(st[i+1]=='b'){

                c++;
                }
                if(st[i+2]=='a'){
                  c++;
                }
                if(st[i+3]=='c'){
                  c++;
                }
                if(st[i+4]=='a'){
                  c++;
                }
                if(st[i+5]=='b'){
                  c++;
                }
                if(st[i+6]=='a'){
                  c++;
                }
                if(c==6)d++;
            }
        }
        if(d>1)return 0;
        else if(d==1) return 1;
        else return -1;
}

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,vv;
    vector<ll> s[1010];
    map<char,ll > mm;
    map<ll, ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    // 12 1 10 8
    cin>>t;
    while(t--){
            et.clear();
    st.clear();
        cin>>n;
        cin>>st;
        et = st;
        c = 0;
        d = 0;
        f = 0;
        for(i=0;i<n;i++){
            if(st[i]=='?')f=1;
        }
        d = check(st,n);
        if(d==1){
                cout<<"Yes"<<endl;
        for(i=0;i<n;i++){
            if(st[i]=='?')st[i]='z';
        }
        cout<<st<<endl;
        continue;
        }
        else if(d==0){cout<<"No"<<endl;continue;}
        st = et;
        c = 0;
        e = 0;
        for(i=0;i+6<n;i++){
                c = 0;
            if(st[i]=='a' || st[i]=='?'){
                st[i]='a';
                c++;
            }
                if(st[i+1]=='b' || st[i+1]=='?'){
                  if(st[i+1]=='?')st[i+1]='b';
                c++;
                }
                if(st[i+2]=='a' || st[i+2]=='?'){
                  if(st[i+2]=='?')st[i+2]='a';
                  c++;
                }
                if(st[i+3]=='c' || st[i+3]=='?'){
                  if(st[i+3]=='?')st[i+3]='c';
                  c++;
                }
                if(st[i+4]=='a' || st[i+4]=='?'){
                  if(st[i+4]=='?')st[i+4]='a';
                  c++;
                }
                if(st[i+5]=='b' || st[i+5]=='?'){
                  if(st[i+5]=='?')st[i+5]='b';
                  c++;
                }
                if(st[i+6]=='a' || st[i+6]=='?'){
                  if(st[i+6]=='?')st[i+6]='a';
                  c++;
                }
                if(c==7){
                   d= check(st,n);
        if(d==1){
        cout<<"Yes"<<endl;
        for(i=0;i<n;i++){
            if(st[i]=='?')st[i]='z';
        }
        cout<<st<<endl;e=1;break;}
        else st=et;
                }
                else st=et;

        }
        if(e==0)cout<<"No"<<endl;
    }

}

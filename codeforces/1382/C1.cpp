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
        cin>>n;
        cin>>st;
        cin>>et;
        if(st.size()==1){
            if(st==et)cout<<0<<endl;
            else cout<<1<<" "<<1<<endl;
        }
        else{for(i=st.size()-1;i>=0;i--){
            if(st[i]=='1'){
                if(st[0]=='0'){
                    v.pb(1);
                    st[0]='1';
                    v.pb(i+1);
                }
                else if(st[0]=='1'){
                    v.pb(i+1);
                }
                for(j=0;j<=i;j++){
                        if(st[j]=='1')st[j]='0';
                        else st[j]='1';
                    }
                    reverse(st.begin(),st.begin()+i+1);
            }
        }
        j = et.size()-1;
        if(et[j]=='1')d=j;
        else{while(et[j]=='0'){j--;d=j;}}
        for(i=d;i>=0;i--){
            if(et[i]=='1'){
                v.pb(i+1);
                while(et[i]=='1'){
                    i--;
                    if(i==-1)break;
                }
                if(i==-1){break;}
                else i++;
            }
            else if(et[i]=='0'){
                v.pb(i+1);
                while(et[i]=='0'){
                    i--;
                    if(i==-1)break;
                }
                if(i==-1){break;}
                else i++;
            }
            if(i==-1)break;
        }
        cout<<v.size()<<" ";
        for(i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;}
        v.clear();
        et.clear();
        st.clear();
    }
}

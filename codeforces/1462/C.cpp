#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,e,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,pp;
    vector<ll > v,s,vv,tt;
    vector<ll> ss;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=9)cout<<n<<endl;
        else if(n>=10 && n<=17){
            a = n-10;
            a++;
            cout<<a<<"9"<<endl;
        }
        else if(n>=18 && n<=24){
            a = n-18;
            a++;
            cout<<a<<"89"<<endl;
        }
        else if(n>=25 && n<=30){
            a = n-25;
            a++;
            cout<<a<<"789"<<endl;
        }
         else if(n>=31 && n<=35){
            a = n-31;
            a++;
            cout<<a<<"6789"<<endl;
        }
        else if(n>=36 && n<=39){
            a = n-36;
            a++;
            cout<<a<<"56789"<<endl;
        }
        else if(n>=40 && n<=42){
            a = n-40;
            a++;
            cout<<a<<"456789"<<endl;
        }
         else if(n>=43 && n<=44){
            a = n-43;
            a++;
            cout<<a<<"3456789"<<endl;
        }
         else if(n==45){
            a = n-45;
            a++;
            cout<<a<<"23456789"<<endl;
        }
        else cout<<-1<<endl;
    }

}

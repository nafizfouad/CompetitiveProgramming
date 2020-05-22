//#include<bits/stdc++.h>
//#define ll long long int
//using namespace std;
//int main()
//{
//    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
//    // vector<pair<ll,ll> > v;
//    vector<ll> s,vv,ss,v;
//    string st,et,ft,pt,ct;
//    deque<char> de;
//    ios_base::sync_with_stdio(false);
//    cin>>a>>b>>c>>d;
//    if((abs(a-c) != abs(b-d)) && a!=c && b!=d)cout<<-1<<endl;
//    else if(a==c)
//    {
//         m = a+(b-d);
//         n = b;
//         if((b<0 && m>0) || (b>0 && m<0)){n=-b;}
//         p = a+(b-d);
//         q = d;
//         if((d<0 && p>0) || (d>0 && p<0)){q=-d;}
//    }
//    else if(b==d)
//    {
//        m = b+(a-c);
//         n = a;
//         if((a<0 && m>0) || (a>0 && m<0)){n=-a;}
//         p = b+(a-c);
//         q = c;
//         if((c<0 && m>0) || (c>0 && m<0)){q=-c;}
//         cout<<m<<" "<<n<<" "<<p<<" "<<q<<endl;
//    }
//    else if(a!=c && b!=d)cout<<c<<" "<<b<<" "<<a<<" "<<d<<endl;
//
//}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll> s,vv,ss,v;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>a>>b>>c>>d;
    if((abs(a-c) != abs(b-d)) && a!=c && b!=d)cout<<-1<<endl;
    else if(a==c)cout<<a+(b-d)<<" "<<b<<" "<<a+(b-d)<<" "<<d<<endl;
    else if(b==d)cout<<a<<" "<<b+(a-c)<<" "<<c<<" "<<b+(a-c)<<endl;
    else if(a!=c && b!=d)cout<<c<<" "<<b<<" "<<a<<" "<<d<<endl;

}

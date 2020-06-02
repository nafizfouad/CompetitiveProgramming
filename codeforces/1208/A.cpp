#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,x,y;
    string st,et,ft;
    vector<ll > vv,v,s;
    map<ll,ll > pa,ea,ma;
    long double bb,cc,aa;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>c>>d>>n;
        m =c;
        p =d;
        while(c){
            et.push_back(c%2+'0');
            c = c/2;
        }
        while(d){
            st.push_back(d%2+'0');
            d = d/2;
        }
        //cout<<et<<" "<<st<<endl;
        if(et.size()>st.size()){
                e = et.size()-st.size();
              //  cout<<"dkf"<<endl;

            for(j=1;j<=e;j++){
                st.push_back('0');
            }
        }
        else if(et.size()<st.size()){
              //  cout<<"kf"<<endl;
            e = st.size()-et.size();
       // cout<<e<<endl;
            for(j=1;j<=e;j++){
                et.push_back('0');
            }
        }
        reverse(st.begin(),st.end());
        reverse(et.begin(),et.end());
       // cout<<st<<" "<<et<<endl;
        for(j=0;j<st.size();j++){
            if((st[j]=='1' && et[j]=='1') || (st[j]=='0' && et[j]=='0')){
                ft.push_back('0');
            }
            else ft.push_back('1');
        }
       // cout<<ft<<endl;
        while(ft.front()=='0'){
            ft.erase(ft.begin());
        }
        f = ft.size()-1;
        e = 0;
        for(j=0;j<ft.size();j++,f--){
            if(ft[j]=='1'){
                e = e+pow(2,f);
            }
        }
        if(n%3==0)cout<<m<<endl;
        else if(n%3==1)cout<<p<<endl;
        else cout<<e<<endl;
        st.clear();
        et.clear();
        ft.clear();
    }

}

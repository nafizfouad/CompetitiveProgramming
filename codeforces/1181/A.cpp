#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<functional>
#include<iterator>
#include<string>
using namespace std;
int main()
{

   long long int i,j,k,a,b,c,n,t,sum,f;
    vector<pair<long long int,long long int> > v,s,tt,pp;
    map<string, int> ma,sa;
    map<string, int> :: iterator it;
    vector<string> :: iterator ki;
    string ss,vv;
    cin>>a>>b>>n;
    if(a%n==0 && b%n==0){
        sum = a/n + b/n;
        cout<<sum<<" "<<0<<endl;
    }
    else {
    v.push_back({(a/n)+(b/n),0});
    a = a+b;
    v.push_back({a/n,b});
    a = a-b;
    b = b+a;

    v.push_back({b/n,a});
    b = b-a;
    if(a%n!=0){

         c = n*((a/n)+1);
         c = c-a;
        if(c<=b){

            b = b-c;
            a = a+c;


            v.push_back({(a/n)+(b/n),c});
            a = a-c;
            b = b+c;
        }
    }
     if(b%n!=0){
        c = n*((b/n)+1);
        c = c-b;
        if(c<=a){
            a = a-c;
            b = b+c;
            v.push_back({(a/n)+(b/n),c});
            a = a+c;
            b = b-c;
        }
    }
    if(a%n==0){
       v.push_back({(a/n)+(b/n),0});
    }
    if(b%n==0){
        v.push_back({(a/n)+(b/n),0});
    }

    sort(v.begin(),v.end());
    f = 0;
    for(i=v.size()-1;i>=1;i--){
        if(v[i].first!=v[i-1].first){
            if(v[i].first!=0){cout<<v[i].first<<" "<<v[i].second<<endl;}
            else {cout<<0<<" "<<0<<endl;}
            f = 1;break;
        }
    }
    if(f==0){
        if(v[0].first!=0)cout<<v[0].first<<" "<<v[0].second<<endl;
        else{cout<<0<<" "<<0<<endl;}
    }
    v.clear();
    }
    return 0;
}

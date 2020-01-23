#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,h,m,x,y,l,d,fl1,fl2,fl3,fl4;
    int f;
    string str,st;
    vector<int> s,v,one,two;
    map<int,int> ma,sa;
    map<int,int> :: iterator it,ki;
    set<int> se;
    cin>>n>>t;
    if(n==t){
        cout<<0<<endl;
    }
    else if(t==0){
        cout<<1<<endl;
    }
    else if(t>(n/2)){
        cout<<n-t<<endl;
    }
    else if(t<=(n/2)){
        cout<<t<<endl;
    }
}
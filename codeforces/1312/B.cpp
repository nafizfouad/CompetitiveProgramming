#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{


    ll a,b,c,n,d,f,m,x1,x2,y2,y1,x3,x4,y3,y4;
    int i,j,k,t;
    vector<int> v,s;
    vector<int> :: iterator it,ki;
    map<int,int> ma;
    string st;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a;
        for(j=1;j<=a;j++){
            cin>>b;
            v.push_back(b);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(j=0;j<a;j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}

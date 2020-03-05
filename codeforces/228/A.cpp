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
    cin>>x1>>x2>>x3>>x4;
    v.push_back(x2);
    v.push_back(x1);
    v.push_back(x3);
    v.push_back(x4);
    a = 0;
    for(i=0;i<4;i++){
        ma[v[i]]++;
    }
    for(auto it = ma.begin();it!=ma.end();it++){
        if((*it).second>1){
            a = a+((*it).second)-1;
        }
    }
    cout<<a<<endl;
    return 0;
}

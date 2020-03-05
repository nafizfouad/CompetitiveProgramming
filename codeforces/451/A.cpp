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
    cin>>a>>b;
    if(a>b){
        a = b;
    }
    if(a%2==1){
        cout<<"Akshat"<<endl;
    }
    else cout<<"Malvika"<<endl;
    return 0;
}

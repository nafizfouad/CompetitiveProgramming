#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,m,l,x,y,s,d;
    vector<int> v;
    set<int> se;
    string ss,vv;
    cin>>k>>l>>m>>n>>d;
    c = 0;
    for(i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}

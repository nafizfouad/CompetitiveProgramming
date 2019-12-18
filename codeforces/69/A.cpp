#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,d,f,r,cc,ccc;
    string s;
    vector<int> v;

    cin>>a;
    c = 0;
    cc = 0;
    ccc = 0;
    for(i=0;i<a;i++){
        cin>>b>>f>>d;
        c = c+b;
        cc = cc+f;
        ccc = ccc+d;
    }
     if(c==0 && cc==0 && ccc==0){cout<<"YES"<<endl;}
     else cout<<"NO"<<endl;
    return 0;
}

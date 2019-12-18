#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,d,f,r;
    string s;
    vector<int> v[40];
    r = 0;
    c = 0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>a;
            if(a==1){
                r = i;
                c = j;
            }
        }
    }
    r = abs(r-3);
    c = abs(c-3);
    cout<<r+c<<endl;
    return 0;
}

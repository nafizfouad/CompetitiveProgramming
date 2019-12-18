#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,d,f,r,e,h,l,o,t;
    vector<int> v = {7,4,77,44,47,74,444,777,474,447,747,774,477,744};
    sort(v.begin(),v.end());
    cin>>t;
    f = 0;
    for(i=0; i<v.size(); i++)
    {
        if(v[i]<=t){if(t%v[i]==0){
            f = 1;
        }
        }
        else break;
    }

    if(f==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

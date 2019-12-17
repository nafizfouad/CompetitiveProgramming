#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,n,t,a;
    string v,s;
    cin>>s;
    int c= s.size();

    for(i=0; i<c; i++)
    {
    if((s[i]!='A' && s[i]!='E' && s[i]!='O' && s[i]!='U' && s[i]!='I' && s[i]!='a' && s[i] != 'e' && s[i] !='i' && s[i] != 'o' && s[i] != 'u' && s[i]!= 'Y' && s[i]!='y')){
        v.push_back('.');
        v.push_back(s[i]);
    }
    }
    for(i=0;i<v.size();i++){
        if(v[i]>='A' && v[i]<='Z'){
            v[i] = v[i] + 32;
        }
    }
    cout<<v<<endl;
    v.clear();
    s.clear();
    return 0;
}

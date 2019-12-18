#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,d,f;
    string s;
    vector<int> v;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]>='1' && s[i]<='9'){
            v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i+1<v.size();i++){
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1]<<endl;
    v.clear();
    s.clear();
    return 0;
}

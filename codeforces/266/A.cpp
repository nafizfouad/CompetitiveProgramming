#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,d,f,r;
    string s;
    vector<int> v;
    cin>>a;
    cin>>s;
    c = 0;
    for(i=0;i+1<s.size();i++){
        if(s[i]==s[i+1]){
            while(s[i]==s[i+1]){
                c++;
                i++;
                if(i==s.size()){
                    break;
                }
            }
            if(i==s.size()){
                break;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a,b,c,n,t,r,d;
    vector<long long int> v,s;
    cin>>t;
    for(i=1;i<=t;i++){
      cin>>a>>b>>c;
      v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
      if(a==b && b==c){
        cout<<0<<endl;
      }
      else if(a==b || b==c || c==a){
        if(v[0]==v[1]){
           v[2] = v[2]-1;
           if(v[2]!=v[1]){
            v[1] = v[1]+1;
            v[0] = v[0]+1;
           }
           cout<<abs(v[0]-v[1])+abs(v[1]-v[2])+abs(v[0]-v[2])<<endl;
        }
        else if(v[1]==v[2]){
            v[0] = v[0]+1;
            if(v[0]!=v[1]){
              v[2] = v[2]-1;
            v[1] = v[1]-1;
            }
            cout<<abs(v[0]-v[1])+abs(v[1]-v[2])+abs(v[0]-v[2])<<endl;
        }
      }
      else{
        v[0]++;
        v[2]--;
        s.push_back(abs(v[0]-v[1])+abs(v[1]-v[2])+abs(v[0]-v[2]));
        v[1]++;
         s.push_back(abs(v[0]-v[1])+abs(v[1]-v[2])+abs(v[0]-v[2]));
        v[1]--;
        v[1]--;
        s.push_back(abs(v[0]-v[1])+abs(v[1]-v[2])+abs(v[0]-v[2]));
        sort(s.begin(),s.end());
        cout<<s[0]<<endl;
      }
      s.clear();
      v.clear();
    }
}

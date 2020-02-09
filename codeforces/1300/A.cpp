#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,s,e,d,n,t,sum;
    vector<int> v;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        c = 0;
        s = 0;
        for(j=1;j<=a;j++){
            cin>>b;

            if(b==0){
                c++;
            }
            s = s+b;
        }
        if(c==0 && s!=0){
            cout<<0<<endl;
        }
        else if(c==0 && s==0){
            cout<<1<<endl;
        }
        else if(c!=0 && s==0){
            cout<<c<<endl;
        }
        else if(c!=0 && s!=0){
            s = s+c;
            if(s==0){
                cout<<c+1<<endl;
            }
            else cout<<c<<endl;
        }

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {

    long long int i,j,k,a,b,c,n,t,m,f;
    string s;
    vector<long long int> v,vv;
    cin>>t;
    for(f=1; f<=t; f++) {
        cin>>n>>k;
        m = 0;
        for(i=1; i<=n; i++) {
            cin>>a;
            v.push_back(a);
            m = m+a;
        }
        if(k==1 && m%2!=0) {
            cout<<"YES"<<endl;
            cout<<n<<endl;
        } else if(k==1 && m%2==0) {
            cout<<"NO"<<endl;
        } else {
            b = 0;
            for(i=0; i<n; i++) {
                b = b+v[i];
                if(b%2!=0) {
                    k--;
                    vv.push_back(i+1);
                    b = 0;
                    if(k==1) {
                        break;
                    }
                }
            }
            b = 0;
            for(j=i+1; j<n; j++) {
                b = b+v[j];
            }
            if(b%2!=0) {
                cout<<"YES"<<endl;
                for(c = 0; c<vv.size(); c++) {
                    cout<<vv[c]<<" ";
                }
                cout<<n<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
        v.clear();
        vv.clear();
    }
    return 0;
}

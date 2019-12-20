    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        
        long long int i,j,k,a,b,c,n,t;
        cin>>t;
        c = 0;
        for(i=1;i<=t;i++){
            cin>>a>>b;
            n = abs(a-b);
            if(n>=2){
                c++;
            }
        }
        cout<<c<<endl;
        return 0;
    }
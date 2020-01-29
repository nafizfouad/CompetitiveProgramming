#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,a,b,c,n,t,sum;
    vector<long long int> v,s;
    string st,ss;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        if(n==2)
        {
            cout<<1<<endl;
        }
        else if(n==3)
        {
            cout<<7<<endl;
        }
        else
        {
            a = n/2;
            if(n%2==0)
            {
                for(j=1; j<=a; j++)
                {
                    st.push_back('1');
                }
                cout<<st<<endl;
                st.clear();
            }
            else
            {
                st.push_back('7');
                for(j=1; j<a; j++)
                {
                    st.push_back('1');
                }
                cout<<st<<endl;
                st.clear();
            }

        }
    }
    return 0;
}

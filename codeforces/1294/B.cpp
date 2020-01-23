#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,n,t,m;
    vector<long long int> s;
    map<pair<long long int,long long int>,int > v,se;
    map<pair<long long int,long long int>, int> :: iterator it,ki;
    string st;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        st.clear();
        v.clear();
        for(j=1; j<=a; j++)
        {
            cin>>b>>c;
            v[ {b,c}] = 1;
        }

        it = v.begin();
        for(j=1; j<=(*it).first.first; j++)
        {
            st.push_back('R');
        }
        for(j=1; j<=(*it).first.second; j++)
        {
            st.push_back('U');
        }

        m = 0;
        c = 0;
        m = (*it).first.first;
        c = (*it).first.second;
        v.erase(v.begin());
        ki = v.begin();
        v[{m,c}] = 1;
        m = 0;
        c = 0;
        for(it = v.begin(); c+1<a; it++,ki++,c++)
        {
            if((*it).first.first<=(*ki).first.first && (*it).first.second<=(*ki).first.second)
            {
                if((*it).first.first<(*ki).first.first)
                {
                    for(k=1; k<=((*ki).first.first)-((*it).first.first); k++)
                    {
                        st.push_back('R');
                    }
                }
                if((*it).first.second<(*ki).first.second)
                {
                    for(k=1; k<=((*ki).first.second)-((*it).first.second); k++)
                    {
                        st.push_back('U');
                    }
                }
            }
            else
            {
                m = 1;
                break;
            }
        }
        if(m==0)
        {
            cout<<"YES"<<endl;
            cout<<st<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}

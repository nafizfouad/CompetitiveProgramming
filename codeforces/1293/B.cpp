    #include <bits/stdc++.h>
    using namespace std;
    class abc
    {
     
    public : double so(int n)
    {
        double i, s = 0.0;
        for (i = 1; i <= n; i++)
        s = s + 1/i;
        return s;
    }
    };
     
    int main()
    {
        abc g;
        int a;
        cin>>a;
        cout<<setprecision(12)<<fixed<<g.so(a)<<endl;
        return 0;
    }
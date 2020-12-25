#include<bits/stdc++.h>
#include<algorithm>



using namespace std;
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define PB(x, v) x.push_back(v);
#define M_P(a, b) make_pair(a, b)
#define pll pair<ll, ll>
#define ll long long
#define mll map<ll, ll>
#define vl vector<ll>
#define fa(x, v) for(auto x: v)
#define fr(i, a, b) for(ll i= a;i <=b; i++)
#define TEST  int test; cin >> test; while(test--)
#define FTEST int TesT; cin >> TesT; for(int test = 1; test<=TesT; test++)

#define B_ begin()
#define E_ end()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define NL_ "\n"
#define F first
#define S second
#define FF first.first
#define FS first.second
#define SF second.first
#define SS second.second

/*class Prime{
    public:
    int p[32000];
    void Set(int n){int r= n%32;int e = n/32;int x = (1<<r);p[e]|=x;}
    int get(int n){int r= n%32;int e = n/32;int x = (1<<r);return !(p[e]&x);}
    Prime(){for(auto &x: p) x =0;Set(0), Set(1);for(int i =  2; i*i<=1000000; i++){if(get(i))for(int j = i*i; j<=1000000; j+=i)
    Set(j);}}
    Prime(vector<int> &prime){for(auto &x: p) x =0;Set(0), Set(1);for(int i =  2; i*i<=1000000; i++){if(get(i))for(int j = i*i; j<=1000000; j+=i)
    Set(j);}for(int i= 3; i<=1000000; i++) if(get(i)) prime.push_back(i);}
};*/
template<typename item>
item abs(item i)
{
    if(i < 0) i= -i;
    return i;
}
#define MMOODD 1000000007
template<class type>
type POW(type b, type p)
{
    type res = 1;
    while(p)
    {
        if(p&1) res*=b;
        b*=b;
        b%=MMOODD ;
        res%=MMOODD ;

        p/=2;
    }
    return res;
}
int tc =0;

#define PI acos(-1);
#define  ull unsigned long long

#define pii pair<int, int>

#define maxn 200000+10



int main()
{
    FAST;

    int t;
    cin>> t;
    while(t--)
    {
        bool ok = 1;

        int c1, c2,c3;
        cin >> c1 >> c2  >> c3;
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3  >> a4 >> a5;
        c1-=a1;
        if(c1< 0) ok = 0;
        c2-= a2;
        if(c2 < 0) ok= 0;
        c3-=a3;
        if(c3< 0) ok = 0;
        if(c1> 0)
        {
            a4-=c1;
           if(a4 < 0) a4 =0;
        }
        if(c2 > 0)
        {
            a5-=c2;
            if(a5< 0) a5 = 0;
        }
        if(a4+a5>c3) ok = 0;
        if(ok) cout <<"YES\n";
        else cout << "NO\n";

    }

}

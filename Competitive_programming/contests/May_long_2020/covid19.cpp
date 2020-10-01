#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
mt19937 mrand(random_device{}());
const ll mod=1000000007;
int rnd(int x) { return mrand() % x;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}

int main()
{
    FAST
    ll t;
    cin>>t;
    VI a;
    while(t--)
    {
       int n;
       cin>>n;
       a.resize(n);
    for (int i =0;i<n;i++)
    {
           cin >> a[i];
    }

    int maximum = -1000;
    int minimum = 1000;

    rep(i,0,n)
    {
       int total = 1; 
        if (i > 0){
            per(j,0,i)
                {
                    if (abs(a[j] - a[j-1]) <= 2)
                        total += 1;
                    else {
                        break;
                        }
                    if (total == n)
                        break;
                }
        }
        if (total < n) {
        rep(j,i + 1, n)
        {
            if(abs(a[i] - a[i +1]) <= 2 )
                total += 1;
            else
            {
                break;
            }
            
        }
        }
    maximum = max(total, maximum);
    minimum = min(minimum, total);
    }
cout << minimum << " " << maximum <<endl ;
    }
return 0;
}

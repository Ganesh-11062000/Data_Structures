#include <bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> a;
int main()
{
ios_base::sync_with_stdio(0); 
cin.tie(nullptr);
ll t;
cin >> t;
while (t --)
{
    ll n;
    cin >> n;
    a.resize(n);
    for(ll i = 0 ; i < n; i++)
        cin >> a[i];
}
}
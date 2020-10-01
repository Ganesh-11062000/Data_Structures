#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> pref;
int main()
{

ios::sync_with_stdio(false);
cin.tie(nullptr);
vector<ll> arr;
ll n;
cin >> n;
pref.resize(n+1);
for (ll i = 1; i <  n; i++)
    cin >> pref[i];
// pref[R..L] = pref[R+1] - pref[L]
// arr = [1,2,3,4,5]
// pref = [1,3,6,10,15]
// arr[0] = pref[0]
// arr[1] = pref[1] - pref[0]
// arr[2] = pref[3] - pref[2]
// arr[i] = pref[i] - pref[i-1]
// pref = [0, 0 ,0 ,0], n = 3
// pref = [0, 0 ,1], n = 2
// pref = [0, 0, 1, 1, 1, 10] , n = 5

for(ll i = 1; i <= n; i++)
{
    ll k =  pref[i] - pref[i -1];
    arr.push_back(k);
}



for(auto num: ans)
    cout << num << " "
return 0;

}
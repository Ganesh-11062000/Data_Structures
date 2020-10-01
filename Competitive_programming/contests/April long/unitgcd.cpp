#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t --)
    {
        ll n;
        cin >> n;
    if (n == 1)
    {
        cout << 1 << "\n";
        cout << "1 1" << "\n";
        continue;
    }
    cout << n / 2 << "\n";
    for(ll i = 0 ; i < n /2 ; i++)
    {
        if (n % 2 == 1 && i == 0)
            cout << "3 ";
        else
            cout << "2 ";
        
        cout << 2 * i + 1 << " " << 2 * i + 2;

        if (n % 2 == 1){
            if (i == 0)
                cout << " "<< n;
        }
        cout << "\n";
        
    }
    }

return 0;
}
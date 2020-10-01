#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector <ll> a;
int main()
{
    int n;
    cin >> n;
    a.resize(n);
    for(int i = 0; i<n;i++)
    {
        cin >> a[i];
    }
    int ans = n - 1;
    map<int,int> freq;

    for(int i = 0 ; i < n ; i++)
    {
        bool validPrefix = true;
        for(int j = 0; j < i ; j++)
        {
            freq[a[j]] ++;

            if (freq[a[j]] == 2){
                validPrefix = false;
                break;
            }
        }

        int min_index_suffix = n;

        for (int j = n-1; j >= i; j--)
        {
            freq[a[j]]++;
            if (freq[a[j]] == 1)
                {
                    min_index_suffix = j;
                }
            else
            {
                break;
            }

            
        }

        if (validPrefix)
            ans = min(ans,min_index_suffix -i );
        freq.clear();
    }

    cout << ans << '\n';

return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
int t;
cin >> t;

while (t--)
{
    int n,k;
    cin >> n;
    vector<ll> songs(n+1);
    for(int i = 0;i<n;i++)
    {
        cin >> songs[i];
    }
    cin >>k;
    
    ll uncle_johny = songs[k-1];

    sort(songs.begin(),songs.end());

    int pos = 0;
    for (int i =0;i<n;i++)
    {
        if (songs[i] == uncle_johny)
        {
            pos = i;
        }
    }
    cout<<pos<<endl;
}

return 0;
}
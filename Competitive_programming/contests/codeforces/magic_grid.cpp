#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    int n;
    cin >> n;
    int grid[n][n];
    int fill = 0;

    for(int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n/2 ; j++)
        {
            grid[i][j] = 4 * fill + 1;
        }
    }

    
return 0;
}
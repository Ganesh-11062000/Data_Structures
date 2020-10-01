#include<bits/stdc++.h>

using namespace std;

bool canJump(vector<int> nums)
{
    int n = nums.size();
    int can_reach = 0;

    for(int i = 0; i <= can_reach; ++i)
    {
        if (i == n-1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
vector<int> nums(5);
// nums = {3,2,1,0,4};
nums = {2,3,1,1,4};

cout << canJump(nums);
return 0;
}
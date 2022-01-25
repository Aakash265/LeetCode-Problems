// Question Link - https://leetcode.com/problems/find-peak-element/.

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if ((nums[i] > nums[n - i - 1] || nums[i] == nums[n - i - 1]) && nums[i] > nums[max])
        {
            max = i;
        }
        else if (nums[i] < nums[n - i - 1] && nums[n - i - 1] > nums[max])
        {
            max = n - i - 1;
        }
    }
    return max;
}

int main()
{
    vector<int> nums = {1, 2, 3, 5, 4};
    int ans = findPeakElement(nums);
    cout<<ans;
    return 0;
}
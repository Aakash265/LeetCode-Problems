// Question Link - https://leetcode.com/problems/sort-colors/.

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums)
{
    int n = nums.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            count0++;
        else if (nums[i] == 1)
            count1++;
        else
            count2++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if ( i < count0)
            nums[i] = 0;
        else if (i < count1+count0 && i >= count0)
            nums[i] = 1;
        else if (i < count2+count1+count0 && i >= count1+count0 && i >= count0)
            nums[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
}

int main()
{
    vector<int> nums = {2, 1, 0, 0, 0, 2, 2, 1, 1, 0};
    sortColors(nums);
}
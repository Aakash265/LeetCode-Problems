// Question Link - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/.

#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target)
{
        int n = nums.size();
        int x = 0, y = n-1;

        if (nums.empty())
        {
            return {-1,-1};
        }
        
        while (x < n && y >= 0)
        {
            if (x == y)
            {
                if (nums[x] == target)
                    return {x,x};
                else 
                    return {-1,-1};
            }
            if (nums[x] == target && nums[y] == target)
            {
                return {x,y};   
            }
            if (nums[x] == target && nums[y] != target && (y-x) != 1)
            {
                y--;
            }
            if (nums[x] != target && nums[y] == target && (y-x) != 1)
            {
                x++;
            }
            if (nums[x] != target && nums[y] != target && (y-x) != 1)
            {
                x++; y--;
            }
            
            if((y-x) == 1) 
            {
                if (nums[x] != target && nums[y] != target)
                    return {-1,-1};
                if (nums[x] == target && nums[y] != target)
                    return {x,x};
                if (nums[x] != target && nums[y] == target)
                    return {y,y};
            }
        }
        return {};
}

int main()
{
    vector<int> nums = {1, 2, 3, 3, 5, 5, 5, 8, 10, 11, 15, 15};
    int target = 5;
    vector<int> ans = searchRange(nums, target);
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
}
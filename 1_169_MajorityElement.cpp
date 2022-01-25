// Question Link - https://leetcode.com/problems/majority-element/.


#include<bits\stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int curr, count = 0;
    for (int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            curr = nums[i];
            count++;
        }
        else if (count > 0 && curr != nums[i])
        {
            count --;
            if(count == 0)
            {
                curr = nums[i];
            }
        }
        else if (count > 0 && curr == nums[i])
        {
            count++;
        }
    }
    return curr;
}

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    int ans;
    ans = majorityElement(nums);
    cout<<ans;
}
#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int low = 0, high = 1, count, ans, diff = 0;
        if (nums.size() == 1) {
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        while (low < high && high < nums.size()) {
            if (nums[low] == nums[high]) {
                high++;
                if (diff < high - low) {
                    diff = high -low;
                    ans = nums[low];
                }
            }
            else if (nums[low] != nums[high]) {
                if (diff < high - low) {
                    diff = high - low;
                    ans = nums[low];
                }
                low = high;
                high++;
            }
        }
        return ans;
    }
};
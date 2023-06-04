#include<bits/stdc++.h>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n-1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            else
                digits[i] = 0;
        }
        // if it is 99, 999, 9999 and so on.
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};
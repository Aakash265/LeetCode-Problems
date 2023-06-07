#include<bits/stdc++.h>

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";

        while (columnNumber > 0) {
            char ch = char(((columnNumber-1)%26) + 65);
            columnNumber = (columnNumber-1)/26;
            ans = ch + ans;
        }
        return ans;
    }
};
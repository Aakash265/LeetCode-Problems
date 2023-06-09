#include<bits/stdc++.h>

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for (char x : columnTitle) {
            cout<<int(x);
            int n = int(x) - 65 + 1;
            ans = ans*26 + n;
        }
        return ans;
    }
};
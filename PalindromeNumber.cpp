#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int beg = 0, end =  str.length()-1;
        while (beg != end && end > beg) {
            if (str[beg] == str[end]) {
                beg++; end--;
            }
            else
                return false;
        }
        return true;
    }
};


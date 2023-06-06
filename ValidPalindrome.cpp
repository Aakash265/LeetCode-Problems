#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.length()-1;
        while (low <= high) {
            if (!isalnum(s[low])) {
                low++;
                continue;
            }
            if (!isalnum(s[high])) {
                high--;
                continue;
            }
            if (tolower(s[low]) != tolower(s[high]))
                return false;
            else {
                low++; high--;
            }
        }
        return true;
    }
};



// Below is also a valid code but does not works on leetcode

// #include <bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string s) {
//     string newStr;
//     if (s.empty())
//         return true;
//     // for removing anything other than alpha
//     for (int i = 0; i < s.length(); i++) {
//         if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
//             newStr += tolower(s[i]);
//         }
//     }
//     cout<<newStr<<endl;
    
//     // for palindrome check
//     int itr = 0;
//     int len = newStr.length();
//     bool flag = false;
//     while (itr <= len/2) {
//         if (newStr[itr] == newStr[len-itr-1]) {
//             flag = true;
//             itr++;
//         }
//         else {
//             flag = false;
//             return flag;
//         }
//     }
//     return flag;
// }

// int main() {
//     string s = "A man, a plan, a canal: Panama";
//     if (isPalindrome(s))
//         cout<<"True";
//     else
//         cout<<"False";
//     return 0;
// }

// Question Link - https://leetcode.com/problems/trapping-rain-water/submissions/

#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int l[n], r[n], maxl = 0, maxr = 0;
    int count = 0;
    for (int i = 0; i < n; i++)   // 4 2 0 3 2 5
    {
        if (maxl <= height[i])
        {
            maxl = height[i];
            l[i] = maxl;
        }
        else
        {
            l[i] = maxl;
        }
    }
    for (int i = n-1; i >= 0; i--)   // 4 2 0 3 2 5
    {
        if (maxr <= height[i])
        {
            maxr = height[i];
            r[i] = maxr;
        }
        else
        {
            r[i] = maxr;
        }
    }
    for (int i = 0; i < n; i++)
    {
        count = count + (min(l[i], r[i]) - height[i]);
    }
    return count;
}

int main()
{
    vector<int> height = {4, 2, 0, 3, 2, 5};
    int ans = trap(height);
    cout<<ans;
}
// Question Link - https://www.geeksforgeeks.org/check-if-two-people-starting-from-different-points-ever-meet/.

#include<bits/stdc++.h>
using namespace std;

bool meet(int x1, int x2, int v1, int v2)
{
    // check the speeds.
    if (x1 < x2 && v1 <= v2)
        return false;
    if (x1 > x2 && v1 >= v2)
        return false;

    int ans;
    ans = abs(x1-x2) % abs(v1-v2);
    if (ans == 0)
        return true;
    else
        return false;
}

int main()
{
    int x1 = 8, x2 = 5, v1 = 4, v2 = 7;
    if (meet(x1, x2, v1, v2))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
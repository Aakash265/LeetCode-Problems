// Question Link - https://leetcode.com/problems/search-a-2d-matrix/.

#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();      // no. of rows
    int n = matrix[0].size();   // no. of columns
    int count = 0;
    int rows = 0;
    int cols = n-1;
    int ele;
        
        
    while (rows < m || cols >= 0)
    {
        ele = matrix[rows][cols];
        if (ele == target)
        {
            return true;
        }
        else if (ele > target)
        {
            cols-- ;
        }
        else if (ele < target)
        {
            rows++ ;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix
    {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 13;
    if(searchMatrix(matrix, target))
        cout<<"true";
    else
        cout<<"false";
}




// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size(); // no. of rows
//         int n = matrix[0].size(); // no. of columns
//         int count = 0;
//         for (int i=0; i<m; i++)
//         {
//             for (int j=0; j<n; j++)
//             {
//                 if(matrix[i][j] == target)
//                 {
//                     count++;
//                 }
//             }
//         }
//         if(count>0)
//             return true;
//         else
//             return false;
//     }
// };
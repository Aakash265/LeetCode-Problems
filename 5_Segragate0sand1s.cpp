// Question Link - https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/.

#include<bits/stdc++.h>
using namespace std;

void segragate0and1(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count++;
    }
    for (int i = 0; i < n; i++)
    {
        if ( i < count)
            arr[i] = 0;
        else
            arr[i] = 1;
    }
}

int main()
{
    int n = 5;
    int arr[5] = {0, 0, 1, 1, 0};

    segragate0and1(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// Another approach using vectors

    // vector<int> vec;
    // vector<int> vec0;
    // vector<int> vec1;
    // for (int i = 1; i < n-1; i++)
    // {
    //     if (arr[i] == 0)
    //         vec0.push_back(arr[i]);
    //     else
    //         vec1.push_back(arr[i]);
    // }

    // merge(vec0.begin(), vec0.end(), vec1.begin(), vec1.end(), vec.begin());

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }

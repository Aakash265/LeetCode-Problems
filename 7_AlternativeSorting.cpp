// Question Link - https://www.geeksforgeeks.org/alternative-sorting/.

#include<bits/stdc++.h>
using namespace std;

vector<int> alternateSort(int arr[], int N)
{
    sort(arr, arr + N);
    vector<int> ans;
    int i = 0, j = N-1;
    
    while (i <= j)
    {
        if (i == j)
          {
              ans.push_back(arr[i]);
              break;
          }
        else if (i != j)
        {
            ans.push_back(arr[j]);
            j--;
            ans.push_back(arr[i]);
            i++;
        }
    }
    return ans;
}

int main()
{
    int N;
    cin>>N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    vector<int> vec;

    vec = alternateSort(arr, N);

    for (int i = 0; i < N; i++)
    {
        cout<<vec[i]<<" ";
    }
}   



#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

void printSubsequence(vector<int> &arr, int n, vector<int> &sub, vector<vector<int>> &subsequences, int i)
{
    if (i >= n)
    {
        subsequences.push_back(sub);
        return;
    }

    sub.push_back(arr[i]); // Take
    printSubsequence(arr, n, sub, subsequences, i + 1);
    sub.pop_back();                                     // Not take
    printSubsequence(arr, n, sub, subsequences, i + 1); // Move ahead without taking
}

void subsequenceWithSumK(vector<int> &arr, int n, vector<int> &sub, int i, int sum, int k)
{
    if (i >= n)
    {
        if (sum == k)
        {
            for (int i = 0; i < (int)sub.size(); i++)
            {
                cout << sub[i] << " ";
            }
            cout << "\n";
        }
        return;
    }

    sub.push_back(arr[i]);
    sum += arr[i];
    subsequenceWithSumK(arr, n, sub, i + 1, sum, k);
    sub.pop_back();
    sum -= arr[i];
    subsequenceWithSumK(arr, n, sub, i + 1, sum, k);
}

bool AnySubsequenceWithSumK(vector<int>& arr, int n, vector<int>& sub, int i, int sum, int k) {
    if (i >= n)
    {
        if (sum == k)
        {
            for (int i = 0; i < (int)sub.size(); i++)
            {
                cout << sub[i] << " ";
            }
            cout << "\n";
            return true;
        }
        return false;
    }

    sub.push_back(arr[i]);
    sum += arr[i];

    if(AnySubsequenceWithSumK(arr, n, sub, i+1, sum, k)) {
        return true;
    }

    sub.pop_back();
    sum -= arr[i];

    return AnySubsequenceWithSumK(arr, n, sub, i+1, sum, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<vector<int>> subsequences;
    vector<int> sub;
    // printSubsequence(arr, n, sub, subsequences, 0);

    // cout << "All subsequences (total = " << subsequences.size() << "):\n";
    // for (int i = 0; i < (int)subsequences.size(); i++)
    // {
    //     if (subsequences[i].empty())
    //     {
    //         cout << "{}";
    //     }
    //     else
    //     {
    //         cout << "{";
    //         for (int j = 0; j < (int)subsequences[i].size(); j++)
    //         {
    //             cout << subsequences[i][j];
    //             if (j + 1 < (int)subsequences[i].size()) cout << ' ';
    //         }
    //         cout << "}";
    //     }
    //     cout << "\n";
    // }

    int k = 2;

    // subsequenceWithSumK(arr, n, sub, 0, 0, k);

    AnySubsequenceWithSumK(arr, n, sub, 0, 0, k);

    return 0;
}
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
    printSubsequence(arr, n, sub, subsequences, 0);

   
    cout << "All subsequences (total = " << subsequences.size() << "):\n";
    for (int i = 0; i < (int)subsequences.size(); i++)
    {
        if (subsequences[i].empty())
        {
            cout << "{}";
        }
        else
        {
            cout << "{";
            for (int j = 0; j < (int)subsequences[i].size(); j++)
            {
                cout << subsequences[i][j];
                if (j + 1 < (int)subsequences[i].size()) cout << ' ';
            }
            cout << "}";
        }
        cout << "\n";
    }

    return 0;
}
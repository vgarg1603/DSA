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

void reverseRec(int n, vector<int> &arr, int i, int j)
{
    if (i >= j)
    {
        return;
    }

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    reverseRec(n, arr, i + 1, j - 1);
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

    int i = 0, j = n - 1;

    reverseRec(n, arr, i, j);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
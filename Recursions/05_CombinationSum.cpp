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

void subsequenceSumI(vector<int>& arr, int sum, vector<int>& ds, int i) {
    if(i == arr.size()) {
        if(sum == 0) {
            for(int num : ds) {
                cout<<num<<" ";
            }
            cout<<"\n";
        }
        return;
    }
    if(sum - arr[i] >= 0) {
        ds.push_back(arr[i]);
        subsequenceSumI(arr, sum - arr[i], ds, i);
        ds.pop_back();
    }
    subsequenceSumI(arr, sum, ds, i+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ds(n);

    subsequenceSumI(arr, k, ds, 0);

    return 0;
}
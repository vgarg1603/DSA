#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void rev(vector<int>& arr, int s, int e) {
    if(s >= e) return;

    swap(arr[s], arr[e]);
    rev(arr, s + 1, e - 1);
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++) cin>>arr[i];

    rev(arr, 0, n-1);

    for(int it : arr) cout<<it<<" ";
    cout<<"\n";

}
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<int, int> mp;
    for(int i = 0; i<n; i++) {
        int x;
        cin>>x;
        mp[x]++;
    }

    int max_elem = -1, max_cnt = 0;
    for(auto it : mp) {
        if(max_cnt < it.second) {
            max_cnt = it.second;
            max_elem = it.first;
        }
    }

    cout<<max_elem<<"\n";
}
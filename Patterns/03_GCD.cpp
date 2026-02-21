#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int divisorGCD(int a, int b)
    {
        set<int> divA = divisor(a);
        set<int> divB = divisor(b);

        int maxi = 1;
        for (auto &it : divA)
        {
            if (divB.find(it) != divB.end())
            {
                maxi = max(it, maxi);
            }
        }
        return maxi;
    }
    int longDivisonGCD(int a, int b) {

        while(b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }

        return a;
    }
    int GCD(int a, int b) {
        return b == 0 ? a : GCD(b, a % b);
    }

private:
    set<int> divisor(int n)
    {
        set<int> list;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                list.insert(i);
                list.insert(n / i);
            }
        }
        return list;
    }
};

int main()
{
    int a, b;
    cin >> a >> b;

    Solution sl;
    cout<<sl.divisorGCD(a, b)<<"\n";
    cout<<sl.longDivisonGCD(a, b)<<"\n";
    cout<<sl.GCD(a, b)<<"\n";
    cout<<__algo_gcd(a, b)<<"\n";
}
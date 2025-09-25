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

void printNameNTimes(int n, string &name)
{
    if (n == 0)
    {
        return;
    }
    cout << name << "\n";
    printNameNTimes(n - 1, name);
}

void print1toN(int n, int i)
{
    if (i == 0)
    {
        return;
    }

    print1toN(n, i - 1);

    cout << i << "\n";
}

void printNto1(int n, int i)
{
    if (i > n)
    {
        return;
    }

    printNto1(n, i + 1);
    cout << i << endl;
}

int sumOfFirstN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfFirstN(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // string str;
    // cin >> str;
    cout << "\n";
    //    printNameNTimes(n, str);

    // print1toN(n, n);

    // printNto1(n, 1);

    cout << sumOfFirstN(n) << "\n";

    return 0;
}
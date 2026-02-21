#include <iostream>

using namespace std;

class Solution
{
public:
    void pattern1(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
    void pattern2(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    void pattern3(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    void pattern4(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << j;
            }
            cout << "\n";
        }
    }
    void pattern5(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= (2 * (i - 1)) + 1; j++)
            {
                cout << "*";
            }
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }
    }
    void pattern6(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            for (int j = 2 * (n - i) + 1; j >= 1; j--)
            {
                cout << "*";
            }
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }
    }
    void pattern7(int n) 
    {
        pattern5(n);
        pattern6(n);
    }
    void pattern8(int n) {
        for(int i = 1; i<=n; i++) {
            for(int j = 1; j<=i; j++) {
                cout<<"*";
            }
            cout<<"\n";
        }
        for(int i = n-1; i>=1; i--) {
            for(int j = 1; j<=i; j++) {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    void pattern9(int n) {
        for(int i = 1; i<=n; i++) {
            for(int j = 1; j<=i; j++) {
                if((i + j) % 2 == 0) cout<<"1 ";
                else cout<<"0 ";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int n;
    cin >> n;
    Solution sl;

    sl.pattern1(n);
    cout << "\n";
    sl.pattern2(n);
    cout << "\n";
    sl.pattern3(n);
    cout << "\n";
    sl.pattern4(n);
    cout << "\n";
    sl.pattern5(n);
    cout << "\n";
    sl.pattern6(n);
    cout << "\n";
    sl.pattern7(n);
    cout<<"\n";
    sl.pattern8(n);
    cout<<"\n";
    sl.pattern9(n);
}
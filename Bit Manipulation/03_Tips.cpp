#include <iostream>

using namespace std;

class BitManip
{
public:
    string decimal_to_binary(int n)
    {
        string s = "";
        int orig = n;
        while (orig > 0)
        {
            int dig = orig % 2;
            orig /= 2;
            s += dig + '0';
        }
        reverse(s.begin(), s.end());
        return s;
    }

    bool isOdd(int n)
    {
        return 1 & n;
    }
    bool isPowerOf2(int n)
    {
        // Method 1
        // int setBits = 0;
        // while(n > 0) {
        //     if(n & 1) setBits++;
        //     n /= 2;
        // }
        // return setBits == 1;

        // Method 2
        return n > 0 && (n & (n - 1)) == 0;
    }
    int setRightmostUnsetBit(int n)
    {
        return n |= (n + 1);
    }
    int getRightmostSetBit(int n) {
        return (n & (n - 1)) ^ n;
    }
};

int main()
{
    BitManip bm;
    int n;
    cin >> n;
    if (bm.isOdd(n))
        cout << "N is odd\n";
    else
        cout << "N is even\n";
    if (bm.isPowerOf2(n))
        cout << "N is power of 2\n";
    else
        cout << "N is not a power of 2\n";

    int newN = bm.setRightmostUnsetBit(n);
    cout<<bm.decimal_to_binary(newN)<<"\n";
    int rightmost1 = bm.getRightmostSetBit(n);
    cout<<bm.decimal_to_binary(rightmost1)<<"\n";

    return 0;
}
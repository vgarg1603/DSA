#include <iostream>

using namespace std;

class BitManipulation
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
    void swap(int &a, int &b)
    {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    bool checkIthBitSet(int a, int index)
    {
        return (1 << index) & a;
    }
    void setIthBit(int &a, int index) {
        a = a | (1 << index);
    }
    void clearIthBit(int &a, int index) {
        a &= ~(1 << index);
    }
    void toggleIthBit(int &a, int index) {
        a ^= (1 << index);
    }
};

int main()
{

    BitManipulation bm;
    int a, b;
    cin >> a >> b;
    // cout << "a " << a << " b " << b << "\n";
    // bm.swap(a, b);
    // cout << "a " << a << " b " << b << "\n";
    int i;
    cout << "Enter index to check ith bit set or not in a: ";
    cin >> i;
    // cout << bm.decimal_to_binary(a) << " " << bm.checkIthBitSet(a, i) << "\n";
    // bm.setIthBit(a, i);
    // cout<<bm.decimal_to_binary(a)<<"\n";
    // cout<<bm.decimal_to_binary(a)<<"\n";
    // bm.clearIthBit(a, i);
    // cout<<bm.decimal_to_binary(a)<<"\n";
    cout<<bm.decimal_to_binary(a)<<"\n";
    bm.toggleIthBit(a, i);
    cout<<bm.decimal_to_binary(a)<<"\n";

}
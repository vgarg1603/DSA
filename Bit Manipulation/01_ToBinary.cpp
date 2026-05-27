#include <iostream>

using namespace std;

class BitManipulation
{
    string binary;
    int n;

public:
    BitManipulation()
    {
        this->binary = "";
        this->n = 0;
    }
    BitManipulation(string bin)
    {
        this->binary = bin;
        this->n = 0;
    }
    BitManipulation(int dec)
    {
        this->n = dec;
        this->binary = "";
    }
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
    int binary_to_decimal(string s)
    {
        int n = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (ch == '1')
            {
                n += pow(2, s.size() - i - 1);
            }
        }
        return n;
    }
    string onesComplement(string binary)
    {
        // Method 1:
        for (int i = 0; i < binary.size(); i++)
        {
            if (binary[i] == '1')
                binary[i] = '0';
            else
                binary[i] = '1';
        }
        return binary;
    }
    string twosComplement(string binary)
    {
        bool one = false;
        for (int i = (int)binary.size() - 1; i >= 0; i--)
        {
            if (binary[i] == '1' && !one)
            {
                one = true;
                continue;
            }
            if (one)
            {
                if (binary[i] == '1')
                    binary[i] = '0';
                else if (binary[i] == '0')
                    binary[i] = '1';
            }
        }
        return binary;
    }
};

int main()
{
    int n;
    cin >> n;
    BitManipulation bm;
    string binary = bm.decimal_to_binary(n);
    int decimal = bm.binary_to_decimal(binary);
    cout << binary << " " << decimal << "\n";
    cout << "onesComplement: " << bm.onesComplement(binary) << " In Decimal: " << bm.binary_to_decimal(bm.onesComplement(binary)) << "\n";
    cout << "twosComplement: " << bm.twosComplement(binary) << " In Decimal: " << bm.binary_to_decimal(bm.twosComplement(binary)) << '\n';
    return 0;
}
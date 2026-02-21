#include <iostream>

using namespace std;

bool check(string s, int l, int h) {
    if(l >= h) return true;
    if(s[l] != s[h]) return false;
    return check(s, l+1, h - 1);
}



int main()
{
    string s;
    cin>>s;

    if(check(s, 0, s.size() - 1)) cout<<"Palindrome\n";
    else cout<<"Not Palindrome\n";
}
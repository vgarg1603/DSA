#include <iostream>

using namespace std;


class Solve{
    public:
    bool trialDivision(int n) {
        if(n <= 1) return false;
        for(int i = 2; i * i <=n; i++) {
            if(n % i == 0) {
                return false;
            }
        }
        return true;
    }
    
};

int main() 
{
    int n;
    cin>>n;

    Solve s;

    if(s.trialDivision(n)) {
        cout<<"Prime\n";
    } else{
        cout<<"Not Prime\n";
    }
}
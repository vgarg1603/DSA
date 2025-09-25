#include <iostream>

using namespace std;

void rectangle(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

void right_triangle(int n) {
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void triangle2(int n) {
    for(int i = 1; i<=n; i++) {
        int print = 1;
        for(int j = n - i + 1; j>=1; j--) {
            cout<<"* ";
            print++;
        }
        cout<<endl;
    }
}

void pyramid(int n) {
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<n; j++) {
            if(j <= n - i) {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(int j = 1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

void opp_pyramid(int n) {
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            if(j <= i - 1  ) {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(int j = 1; j<n; j++) {
            if(j<= n - i) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern5(int n) {

    int print = 1;

    for(int i = 1; i<=5; i++) {
        for(int j = 1; j<=i; j++) {
            cout<<print<<" ";
            print = print == 1 ? 0 : 1;
        }
        cout<<endl;
    }
}

void pattern6(int n) {
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=i; j++) {
            cout<<j;
        }
        for(int j = i+1; j<=n; j++) {
            cout<<" ";
        }
        for(int j = 1; j<=n-i;j++) {
            cout<<" ";
        }
        for(int j = i; j>=1; j--) {
            cout<<j;
        }
        cout<<endl;

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // rectangle(4);

    // right_triangle(4);

    // triangle2(3);

    // pyramid(5);

    // opp_pyramid(5);

    // pattern5(5);

    pattern6(5);

    return 0;
}
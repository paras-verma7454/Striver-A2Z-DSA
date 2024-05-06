#include <bits/stdc++.h>
using namespace std;

void pattern19(int n){
    int space = 0;
    for (int i = 1; i <= n; i++){
        // Stars
        for (int j = 1; j <= n - i + 1; j++){
            cout << "*";
        }
        // space
        for (int j = 0; j < space; j++){
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i + 1; j++){
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
    int spaces = (n * 2) - 2;
    for (int i = 1; i <= n; i++){
        // stars
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        // space
        for (int j = 1; j <= spaces; j++){
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern19(n);
}
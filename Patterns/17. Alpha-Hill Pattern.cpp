#include <bits/stdc++.h>
using namespace std;

void pattern17(int n){
for (int i = 1; i <=n; i++){
        // spaces
        for (int j =0 ; j < (n-i); j++){
            cout << " ";
        }
        // char
        for (int j = 0; j < i; j++){
            char ch = 'A' + j;
            cout << ch << " ";
        }
        // char
        for (int j = 1; j < i; j++){
            char ch = 'A' + i - j - 1;
            cout << ch << " ";
        }
        // spaces
        for (int j = 0; j <(n-i); j++){
            cout << " ";
        }
        cout << endl;
            
            }
}

int main()
{
    int n;
    cin >> n;
    pattern17(n);
}
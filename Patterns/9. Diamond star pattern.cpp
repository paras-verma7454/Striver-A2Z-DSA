#include <bits/stdc++.h>
using namespace std;

int pattern1(int n)
{
    for (int i = 0; i < n; i++){
        // space
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        // pattern
        for (int k = 0; k < 2 * i + 1; k++){
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i -1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // pattern
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern1(n);
    pattern2(n);
}
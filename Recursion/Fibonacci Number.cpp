#include <bits/stdc++.h>
using namespace std;
// 509. Fibonacci Number
int fibonacci(int N)
{
    if (N <= 1) return N;
    int last = fibonacci(N - 1);
    int slast = fibonacci(N - 2);
    int fib=last + slast;

    return fib;
}

int main()
{
    int N;
    cin >> N;
    cout << fibonacci(N);
}
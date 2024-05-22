#include <bits/stdc++.h>
using namespace std;

int HCF(int n, int m)
{
    while ((n > 0 & m > 0))
    {
        if (n > m)
            n = n % m;
        else
            m = m % n;
    }
    if (n == 0)  return m;
    else   return n;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int hcf = HCF(n, m);
    cout << "HCF: " << hcf << endl;
    return 0;
}

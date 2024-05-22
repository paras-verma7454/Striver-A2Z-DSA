#include <bits/stdc++.h>
using namespace std;

int Divisors(int n)
{
    vector<int> faq;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if ((n % i) == 0)
        {
            faq.push_back(i);
        }
        int a = n / i;
        if (a != i)
        {
            faq.push_back(a);
        }
        
    }
    sort(faq.begin(), faq.end());
        for (auto it : faq)
            cout<< it << " ";
}


int main()
{
    int n;
    cin >> n;
    Divisors(n);
}

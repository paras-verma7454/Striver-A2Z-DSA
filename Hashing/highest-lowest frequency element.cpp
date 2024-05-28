#include <bits/stdc++.h>
using namespace std;
void freq(vector<int> &arr, int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    for (auto it : mpp)
    {
        int count = it.second;
        int num = it.first;
        if (count > maxFreq)
        {
            maxEle = num;
            maxFreq = count;
        }
        if (count < minFreq)
        {
            minEle = num;
            minFreq = count;
        }
    }
    cout << maxEle << " : " << maxFreq << endl;
    cout << minEle << " : " << minFreq << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    freq(arr, n);
}

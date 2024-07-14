#include <bits/stdc++.h>
using namespace std;

void longestSubarrayWithSumK(vector<int>& a, long long k){
    int len = 0, j = 0, i = 0;
    long long sum = a[0];
    int n = a.size();
    while (j < n){
        while (sum > k && i<=j){
            sum -= a[i];
            i++;
        }
        if (sum == k){
            len = max(len, j - i + 1);
        }
        j++;
        if (j < n){
            sum += a[j];
        }
    }
    cout<<len;
}

int main(){
    int n;
    long long k;
    cin >>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    longestSubarrayWithSumK(a,k);

}
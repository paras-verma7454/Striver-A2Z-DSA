#include <bits/stdc++.h>
using namespace std;

// 268. Missing Number
void missing(vector<int> &arr, int n){
    int sum2 = 0;
    int sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n; i++){
        sum2 += arr[i];
    }
    int missing = sum - sum2;
    cout << missing;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    missing(arr, n);
}
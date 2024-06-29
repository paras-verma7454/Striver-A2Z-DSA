#include <bits/stdc++.h>
using namespace std;

// 189. Rotate Array
void rotate(vector<int> &nums, int n, int k){
        k=k%n;
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
    }


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    rotate(nums, n, k);
    for (int i = 0; i < n; i++){
        cout<< nums[i]<<" ";
        }
}
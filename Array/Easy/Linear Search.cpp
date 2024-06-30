#include <bits/stdc++.h>
using namespace std;

// If ‘num’ is present in the array,
//  return the 0-based index of the first occurrence of ‘num’. 
// Else, return -1.
void LinearSearch(vector<int>& nums,int n,int num) {
        int index=-1;
        for(int i=0;i<n;i++){
        if(nums[i]==num){
            index= i;
        }
    }
    cout<<index;
    }


int main(){
    int n,num;
    cin >> n>>num;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    LinearSearch(nums,n,num);
    
}
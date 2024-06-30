#include <bits/stdc++.h>
using namespace std;

//283. Move Zeroes
void moveZeroes(vector<int>& nums,int n) {
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        for(int i=j;i<n;i++){
            nums[i]=0;
        }
    
    }


int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    moveZeroes(nums,n);
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
}
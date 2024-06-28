#include <bits/stdc++.h>
using namespace std;

// 26. Remove Duplicates from Sorted Array
void RemoveDuplicate(vector<int> &arr, int n){
        int i = 0;
        for (int j = 1; j < n; j++){
            if (arr[j] != arr[i]){
                arr[i + 1] = arr[j];
                i++;
            }
        }
        cout<<"No. of unique elements: "<<( i + 1)<<endl;
        for(int a=0;a<i+1;a++){
            cout<<arr[a]<<" ";
        }
    }

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    RemoveDuplicate(arr, n);

}
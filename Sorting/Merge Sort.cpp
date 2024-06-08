#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> t;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high){
        if (arr[left] <= arr[right]){
            t.push_back(arr[left]);
            left++;
        }
        else{
            t.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid){
        t.push_back(arr[left]);
        left++;
    }

    while (right <= high){
        t.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++){
        arr[i] = t[i - low];
    }
}

void Merge_Sort(vector<int> &arr, int low, int high){
    if (low < high){
        int mid = (low + high) / 2;
        Merge_Sort(arr, low, mid);
        Merge_Sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int low = 0;
    int high = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Merge_Sort(arr, low, high);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
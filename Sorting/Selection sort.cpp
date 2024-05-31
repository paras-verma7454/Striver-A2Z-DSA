#include <bits/stdc++.h>
using namespace std;
// compare two no. and  Minimum will be at  the first 
// input: 6 
// 13 46 24 52 20 9
// output: 9 13 20 24 46 52 
void Selection_Sort(int arr[],int n){
    for(int i=0;i<=(n-2);i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Selection_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

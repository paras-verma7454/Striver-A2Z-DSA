#include<bits/stdc++.h>
using namespace std;

void sorted(int a[],int n){
    for (int i=1;i<n;i++){
        if(a[i]>=a[i-1]){
        }
        else {
            cout<<"false";
            return;
        }
    }
    cout<<"True";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sorted(a,n);
    
}
#include<bits/stdc++.h>
using namespace std;

void SecLargest(int a[],int n){
    int largest=a[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if (a[i]<largest && a[i]>slargest){
            slargest=a[i];
        }
    }
    cout<<slargest;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SecLargest(a,n);
}
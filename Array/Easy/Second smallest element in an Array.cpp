#include<bits/stdc++.h>
using namespace std;

void Secsmallest(int a[],int n){
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if (a[i]!=smallest && a[i]<ssmallest){
            ssmallest=a[i];
        }
    }
    cout<<ssmallest;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Secsmallest(a,n);
}
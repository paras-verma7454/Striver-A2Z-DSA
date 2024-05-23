#include<bits/stdc++.h>
using namespace std;
int sum=0;
int S(int n){
    if(n==0){
        return sum;
    }
    sum+=n;
    S(n-1);
    
}
int main(){
    int n;
    cin>>n;
    int sum = S(n);
    cout<<"Sum of 1 to "<<n<<" is : "<<sum;
}
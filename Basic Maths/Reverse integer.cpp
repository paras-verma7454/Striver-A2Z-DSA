#include<bits/stdc++.h>
using namespace std;

// 7. Reverse Integer
int reverseInt(int n){
    int rev=0;
        while(n!=0){
            int ld=n%10;
            if((rev > INT_MAX/10) || (rev < INT_MIN/10) ){
                return 0;
            }
            else{
            rev=(rev*10)+ld;
            n=n/10;
            }
        }
        return rev;
}

int main(){
    int n;
    cin>>n;
    reverseInt(n);
}

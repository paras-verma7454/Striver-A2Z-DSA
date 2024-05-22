#include<bits/stdc++.h>
using namespace std;

// 9. Palindrome Number
bool Palindrome(int x){
    int rev=0;
        int og=x;
        if(x<0)
        {
            return false;
        }
        while(x>0)
        {
            int ld=x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return 0;
            }
            rev=(rev*10)+ld;
            x=x/10;
        }
        if(rev==og){
            return true;
        }
        else {
            return false;
        }
}

int main(){
    int x;
    cin>>x;
    if(Palindrome(x)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

#include <bits/stdc++.h>
using namespace std;

int pattern(int n){
    for (int i = 0; i<=n; i++){
        for(int j =n; j>i; j--){
            cout <<"* ";
        }
        cout<<endl;
}
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
    
}
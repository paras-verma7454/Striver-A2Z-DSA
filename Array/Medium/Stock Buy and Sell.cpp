#include <bits/stdc++.h>
using namespace std;

// 121. Best Time to Buy and Sell Stock - LeetCode
int maxProfit(vector<int>& prices) { 
        int buy=prices[0],sell=0,profit=0;
        for(int i=1;i<prices.size();i++){
            sell=prices[i]-buy;
            profit=max(profit,sell);
            buy=min(buy,prices[i]);
        }
        return profit;
    }





int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int Profit =maxProfit(prices);
    cout<<Profit;
}
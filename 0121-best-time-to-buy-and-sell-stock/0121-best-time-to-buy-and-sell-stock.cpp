class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = 0;
        int k = prices[0];
        int i = 1;

        while(i < prices.size())
        {
            int profit = prices[i] - k;

            n = max(n, profit);
            k = min(k, prices[i]);

            i++;
        }

        return n;
    //    int n=INT_MIN;int k=0;
    //    int i=0, j=prices.size()-1;
    //    while(i<j)
    //    {
    //     k=prices[j]-prices[i];
        
    //     n=max(k,n);
    //     i++;j--;
    //     if(prices[j]<prices[i])
    //     j--;
    //     else
    //     i++;
    //    } 
    //    return n;
    }
};
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());int i=0;int x=0;

        while(i<costs.size())
        {
            if(coins<costs[i])
            return x;
            if(coins!=0){
            coins-=costs[i];
            x++;
            }
            i++;
        }
        return x;
    }
};
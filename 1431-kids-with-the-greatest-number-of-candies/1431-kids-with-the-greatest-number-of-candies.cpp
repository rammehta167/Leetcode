class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> out;
        int j = 0;
        for (int i = 0; i < candies.size(); i++) {
            for (j = 0; j < candies.size(); j++) {
                if (j == i)
                    continue;
                if (candies[i] + extraCandies >= candies[j])
                    continue;
                else
                    break;
            }
            if (j == candies.size())
                out.push_back(true);
            else
                out.push_back(false);
        }
        return out;
    }
};
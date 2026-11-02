class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int count2 = 0;
        for (int i = 0; i < bank.size(); i++) {
            int count1 = 0;
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1')
                    count1++;
            }
            if (count1 > 0) {
                ans += count2 * count1;
                count2 = count1;
            }
        }
        return ans;
    }
};
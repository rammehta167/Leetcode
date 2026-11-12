class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, prev = 0;
        for(auto &row : bank) {
            int count = 0;
            for(char c : row) {
                if(c == '1')
                    count++;
            }
            ans += prev * count;
            if(count > 0)
                prev = count;
        }
        return ans;
    }
};
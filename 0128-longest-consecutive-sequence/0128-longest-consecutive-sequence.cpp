class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int m = 0;
        for (auto x : s) {
            if (s.find(x - 1) == s.end()) {
                int k = 1;
                int num = x;
                while (s.find(num + 1) != s.end()) {
                    num++;
                    k++;
                }
                m = max(m, k);
            }
        }
        return m;
    }
};
class Solution {
public:
    void printsub(vector<int>& nums, vector<int>& ans, int i,
                  vector<vector<int>>& all) {
        if (i == nums.size()) {
            all.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        printsub(nums, ans, i + 1, all);

        ans.pop_back();

        printsub(nums, ans, i + 1, all);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> all;
        vector<int> ans;

        printsub(nums, ans, 0, all);

        return all;
    }
};
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size() * 2);
        int x=0;
        int y=nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            ans[x]=nums[i];
            ans[y]=nums[i];
            y++;x++;
        }
        return ans;
    }
};
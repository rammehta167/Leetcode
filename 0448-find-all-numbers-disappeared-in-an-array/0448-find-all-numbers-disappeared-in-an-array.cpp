class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> out;

        for(int x : nums)
            s.insert(x);

        for(int i = 1; i <= nums.size(); i++)
        {
            if(s.find(i) == s.end())
                out.push_back(i);
        }

        return out;
    }
};
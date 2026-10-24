class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> out;
        map<int , int> m;
        for(auto x: nums)
        {
            m[x]++;
            if(m[x]==2)
            out.push_back(x);
        }
        return out;
    }
};
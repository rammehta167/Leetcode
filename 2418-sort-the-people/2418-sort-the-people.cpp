class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> m;

        int n = heights.size();

        for(int i = 0; i < n; i++)
        {
            m[heights[i]] = names[i];
        }

        vector<string> people;

        for(auto x = m.rbegin(); x != m.rend(); x++)
        {
            people.push_back(x->second);
        }

        return people;
    }
};
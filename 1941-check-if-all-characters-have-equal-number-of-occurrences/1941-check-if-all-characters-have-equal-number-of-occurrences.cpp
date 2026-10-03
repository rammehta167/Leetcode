class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> x;
        int i;

        for(char c : s) {
            x[c]++;
        }

        i = x.begin()->second;

        for(auto c : x) {
            if(i != c.second)
                return false;
        }

        return true;
    }
};
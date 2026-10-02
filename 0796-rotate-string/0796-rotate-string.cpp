class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
            return false;

        for(int j = 0; j < s.size(); j++)
        {
            int last = s[s.size() - 1];

            for(int i = s.size() - 1; i > 0; i--)
            {
                s[i] = s[i - 1];
            }

            s[0] = last;

            if(s == goal)
                return true;
        }

        return false;
    }
};
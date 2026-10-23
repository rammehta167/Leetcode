
class Solution {
public:
    int longestPalindrome(string s) {
        int sum = 0;
        map<char, int> x;

        for (char c : s)
            x[c]++;

        for (auto c : x)
            sum += (c.second / 2) * 2;

        for (auto c : x)
            if (c.second % 2 == 1)
                return sum + 1;

        return sum;
    }
};

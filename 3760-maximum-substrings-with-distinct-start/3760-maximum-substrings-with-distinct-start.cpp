class Solution {
public:
    int maxDistinct(string s) {
        vector<bool> vis(256, false);
        int count = 0;
        for(char c : s) {
            if(!vis[c]) {
                count++;
                vis[c] = true;
            }
        }
        return count;
    }
};
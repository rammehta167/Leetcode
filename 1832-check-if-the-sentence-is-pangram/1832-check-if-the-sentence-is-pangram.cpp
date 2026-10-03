class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool all = true;
        vector<int> freq(26, 0);

        for (char c : sentence) {
            if (isalpha(c))
                freq[tolower(c) - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) {
                all = false;
                break;
            }
        }

        return all;
    }
};
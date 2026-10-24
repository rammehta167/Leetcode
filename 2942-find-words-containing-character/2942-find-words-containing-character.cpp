class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> out;
        int i=0;
        for(auto y: words)
        {
        if(y.find(x) != string::npos)
        out.push_back(i);
        i++;
        }
    return out;
    }
};
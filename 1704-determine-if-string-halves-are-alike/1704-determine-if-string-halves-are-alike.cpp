class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = s.substr(0, s.length() / 2);
        string b = s.substr(s.length() / 2);
        int freq1=0;int freq2=0;
        for (char c : a) {
            if (string("aeiouAEIOU").find(c) != string::npos)
                freq1++;
        }
        for (char c : b) {
            if (string("aeiouAEIOU").find(c) != string::npos)
                freq2++;
        }
        if(freq1==freq2)
        return true;

        return false;
    }
};
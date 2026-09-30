class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int , int>freq1;
        map<int , int>freq2;

        for(auto x:s)
        {
            freq1[x]++;
        }
        for(auto x:t)
        {
            freq2[x]++;
        }
        if(freq1==freq2)
        return true;
        else
        return false;

    }
};
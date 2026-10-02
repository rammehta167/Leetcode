class Solution {
public:
    char findTheDifference(string s, string t) {
        map <char , int>freq1;
        for(char x:s)
        {
            freq1[x]++;
        }
        for(char x:t)
        {
            freq1[x]--;
            if(freq1[x]==-1)
            return x;
        }

    return ' ';
    }
};
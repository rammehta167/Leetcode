class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0; i<s.length()-1; i++)
        {
            int j=i+1;
        sum+=abs(int(s[i]-s[j]));
        }
    return sum;
    }
};
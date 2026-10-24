class Solution {
public:
    int maxDistinct(string s) {
        string a;int count=0;
        for(char c: s)
        {
            if(a.find(c)==string::npos)
            {
                count++;
                a.push_back(c);
            }
        }
        return count;
    }
};
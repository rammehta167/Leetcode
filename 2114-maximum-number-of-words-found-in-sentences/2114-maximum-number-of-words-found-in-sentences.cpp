class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int m=0;
        for(int i=0; i<n; i++)
        {
            int count=1;
            for(char c:sentences[i])
            {
                if(c==' ')
                count++;
            }
            m=max(m,count);
        }
        return m;
    }
};
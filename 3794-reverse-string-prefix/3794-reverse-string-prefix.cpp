class Solution {
public:
    string reversePrefix(string s, int k) {
        int x=0;
        k=k-1;
       while(x<=k)
       {
        swap(s[k], s[x]);
        x++;
        k--;
       }
       return s;
    }
};
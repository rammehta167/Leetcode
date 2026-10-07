class Solution {
public:
    bool judgeCircle(string moves) {
     map<char, int> m;
     for(char c: moves)
     {
        m[c]++;
     }
     if(m['L']==m['R']&&m['U']==m['D'])
     return true;
    return false;        
    }
};
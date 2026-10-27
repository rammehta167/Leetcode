class Solution {
public:
    int smallestEvenMultiple(int n) {
        int out=n;
        while(out%n!=0|| out%2!=0)
        {
            out++;
        }
        return out;
    }
};
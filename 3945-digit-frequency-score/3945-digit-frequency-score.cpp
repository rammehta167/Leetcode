class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int , int> freq;
        int sum=0;
        while(n>0)
        {
            int mode=n%10;
            freq[mode]++;
            n=n/10;
        }
        for(auto x: freq)
        {
            sum+=x.first*x.second;

        }
        return sum;
    }
};
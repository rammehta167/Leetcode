class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sume=0;
        int sumo=0;
        for(int i=1; i<=2*n; i++)
        {
            if(i%2==0)
            sume+=i;
            else
            sumo+=i;
        }
        int gcd=2;
        for(int i = 1; i <= min(sume, sumo); i++)
        {
            if(sume % i == 0 && sumo % i == 0)
                gcd = i;
        }
        return gcd;
    }
};
class Solution {
public:
    int findComplement(int num) {
        vector<int> x;
        int n = num;

        while(n > 0) {
            if(n % 2 == 0)
                x.push_back(1);
            else
                x.push_back(0);

            n = n / 2;
        }

        int ans = 0;
        long long power = 1;

        for(int y : x) {
            ans += y * power;
            power *= 2;
        }

        return ans;
    }
};
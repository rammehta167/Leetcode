class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        int j=0;
        for(int i=0; i<n; i++)
        {
            j=i+1;
            if(n%j==0)
            ans+=nums[i]*nums[i];
        }
        return ans-1;
    }
};
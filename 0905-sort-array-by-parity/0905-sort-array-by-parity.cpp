class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int e=0;
        int o=nums.size()-1;
       while(e<=o)
       {
        if(nums[e]%2==0&&nums[o]%2!=0){
        e++;o--;
        }
        else if(nums[e]%2!=0&&nums[o]%2==0){
            swap(nums[e], nums[o]);
        e++;o--;
        }
        else if(nums[e]%2==0&&nums[o]%2==0){
        e++;
        }
        else if(nums[e]%2!=0&&nums[o]%2!=0){
        o--;
        }
       }
       return nums;
    }
};
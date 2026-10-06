class Solution {
public:
    int search(vector<int>& nums, int target) {
        
            int x=0;
            int z=nums.size()-1;
        while(x<=z)
        {
            int y=(x+z)/2;
            if(target<nums[y])
            {
                z=y-1;
            }
            else  if(target>nums[y])
            {
                x=y+1;
            }
            else
            return y;
        }
    //    for(int i=0; i<nums.size(); i++)
    //    {
    //     if(target<=nums[i])
    //     return i;
    //    } 
    //    return -1;
    return -1;
    }
};
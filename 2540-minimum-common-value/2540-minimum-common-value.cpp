class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = 0;
        int j = 0;

        for(int i = 0; i < nums1.size() && j < nums2.size(); i++) {

            if(nums1[i] == nums2[j]) {
                return nums1[i];
            }

            if(nums1[i] < nums2[j]) {
                continue;
            }

            j++;
            i--;
        }

        return -1;
    }
};
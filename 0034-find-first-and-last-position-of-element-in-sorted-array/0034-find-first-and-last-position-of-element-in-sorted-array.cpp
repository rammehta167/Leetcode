class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int x = 0;
        int z = nums.size() - 1;
        int first = -1;
        int last = -1;

        while (x <= z) {
            int y = (x + z) / 2;

            if (nums[y] == target) {
                first = y;
                z = y - 1;
            } else if (nums[y] < target) {
                x = y + 1;
            } else {
                z = y - 1;
            }
        }

        x = 0;
        z = nums.size() - 1;

        while (x <= z) {
            int y = (x + z) / 2;

            if (nums[y] == target) {
                last = y;
                x = y + 1;
            } else if (nums[y] < target) {
                x = y + 1;
            } else {
                z = y - 1;
            }
        }

        return {first, last};
    }
};
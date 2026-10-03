class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> x(nums.begin(), nums.end());

        auto it = x.rbegin();

        if(x.size() < 3)
            return *it;

        it++;
        it++;
        
        return *it;
    }
};
// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         set<int> x(nums.begin(), nums.end());

//         auto it = x.end();

//         if(x.size() < 3) {
//             it--;
//             return *it;
//         }

//         it--;
//         it--;
//         it--;

//         return *it;
//     }
// };
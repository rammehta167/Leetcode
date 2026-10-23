
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> win;

        for (int i = 0; i < order.size(); i++) {
            for (int j = 0; j < friends.size(); j++) {
                if (order[i] == friends[j]) {
                    win.push_back(order[i]);
                    break;
                }
            }
        }

        return win;
    }
};

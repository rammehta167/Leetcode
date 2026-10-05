/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        // ListNode * temp=head;
        // ListNode * mid=head;
        // int k=0;
        // while(temp->next!=nullptr)
        // {
        //     k++;
        //     temp=temp->next;
        // }
        // if(k%2!=0)
        // k=(k/2)+1;
        // else
        // k=k/2;

        // while(k!=0)
        // {
        //     mid=mid->next;
        //     k--;
        // }
        // return mid;
    }
};
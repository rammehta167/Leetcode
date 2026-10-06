/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp != nullptr)
        {
            if(temp->val == val)
            {
                ListNode* del = temp;
                temp = temp->next;

                if(prev == nullptr)
                    head = temp;
                else
                    prev->next = temp;

                delete del;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
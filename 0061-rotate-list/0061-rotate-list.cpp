class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr)
            return head;

        int n = 1;
        ListNode* temp = head;

        while(temp->next != nullptr)
        {
            temp = temp->next;
            n++;
        }

        k = k % n;

        while(k != 0)
        {
            temp = head;

            while(temp->next->next != nullptr)
            {
                temp = temp->next;
            }

            ListNode* tail = temp->next;

            temp->next = nullptr;
            tail->next = head;
            head = tail;

            k--;
        }

        return head;
    }
};
class Solution {
    public:
        bool isPalindrome(ListNode* head) {
            stack<int> st;
            ListNode* current = head;
            while (current != NULL) {
                st.push(current->val);
                current = current->next;
            }
            while (head != NULL) {
                if (st.top() != head->val) {
                    return false;
                }
                st.pop();
                head = head->next;
            }
            return true;
        }
    };
    
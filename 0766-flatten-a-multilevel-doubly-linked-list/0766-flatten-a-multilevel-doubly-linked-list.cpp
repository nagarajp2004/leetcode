#include <stack>

class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return nullptr;
        Node* cur = head;
        stack<Node*> st;

        while (cur) {
            if (cur->child) {
                if (cur->next) st.push(cur->next);
                cur->next = cur->child;
                cur->child->prev = cur;
                cur->child = nullptr;
            }
            if (!cur->next && !st.empty()) {
                cur->next = st.top();
                st.top()->prev = cur;
                st.pop();
            }
            cur = cur->next;
        }
        return head;
    }
};

class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

class MyLinkedList {
public:
    Node* head;

    MyLinkedList() {
        head = new Node(-1); // dummy head
    }

    int get(int index) {
        Node* cur = head->next; // start from first real node
        int i = 0;
        while (cur != NULL) {
            if (i == index) return cur->val;
            cur = cur->next;
            i++;
        }
        return -1; // index out of range
    }

    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head->next;
        head->next = temp;
    }

    void addAtTail(int val) {
        Node* cur = head;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        Node* temp = new Node(val);
        cur->next = temp;
    }

    void addAtIndex(int index, int val) {
        int i = 0;
        Node* cur = head;
        // move to the node *before* the insertion point
        while (cur != NULL && i < index) {
            cur = cur->next;
            i++;
        }
        if (cur == NULL) return; // index > length — do nothing
        Node* temp = new Node(val);
        temp->next = cur->next;
        cur->next = temp;
    }

    void deleteAtIndex(int index) {
        int i = 0;
        Node* cur = head;
        // move to the node *before* the deletion point
        while (cur->next != NULL && i < index) {
            cur = cur->next;
            i++;
        }
        if (cur->next == NULL) return; // index invalid
        Node* temp = cur->next;
        cur->next = temp->next;
        delete temp;
    }
};

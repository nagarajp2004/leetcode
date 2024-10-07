//{ Driver Code Starts
#include <stdint.h>

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *npx;

    Node(int x) {
        data = x;
        npx = NULL;
    }
};

struct Node *XOR(struct Node *a, struct Node *b) {
    return (struct Node *)((uintptr_t)(a) ^ (uintptr_t)(b));
}

struct Node *insert(struct Node *head, int data);

vector<int> getList(struct Node *head);

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        struct Node *head = NULL;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            head = insert(head, number);
        }

        vector<int> vec = getList(head);
        for (int x : vec)
            cout << x << " ";
        cout << endl;
        for (int i = vec.size() - 1; i >= 0; i--) {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }
    return (0);
}

// } Driver Code Ends


/*
Structure of linked list is as
struct Node
{
    int data;
    struct Node* npx;

    Node(int x){
        data = x;
        npx = NULL;
    }
};

Utility function to get XOR of two Struct Node pointer
use this function to get XOR of two pointers
struct Node* XOR (struct Node *a, struct Node *b)
{
    return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}
*/

// function should insert the data to the front of the list

struct Node *insert(struct Node *head, int data) {
    // Create a new node
    Node* newNode = new Node(data);

    // The new node's npx will be XOR of NULL (previous) and current head
    newNode->npx = XOR(NULL, head);

    // If the list is not empty, update the npx of head node
    if (head != NULL) {
        Node* next = XOR(NULL, head->npx); // Get the next node of head
        head->npx = XOR(newNode, next);    // Update the npx of head to include new node
    }

    // The new node becomes the new head
    return newNode;
}

vector<int> getList(struct Node *head) {
    vector<int> result;
    Node* curr = head;
    Node* prev = NULL;
    Node* next;

    // Traverse the list
    while (curr != NULL) {
        result.push_back(curr->data);

        // Get the next node using XOR of current npx and previous node
        next = XOR(prev, curr->npx);

        // Move forward in the list
        prev = curr;
        curr = next;
    }

    return result;
}

#include <bits/stdc++.h>
using namespace std;

/* Linked list node */
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* insertionSort(Node* head_ref) {
        if (!head_ref || !head_ref->next)
            return head_ref;

        Node* sorted = NULL;
        Node* curr = head_ref;

        while (curr) {
            Node* nextNode = curr->next;
            sorted = sortedInsert(sorted, curr);
            curr = nextNode;
        }
        return sorted;
    }

  private:
    Node* sortedInsert(Node* head, Node* node) {
        if (!head || node->data <= head->data) {
            node->next = head;
            return node;
        }

        Node* curr = head;
        while (curr->next && curr->next->data < node->data) {
            curr = curr->next;
        }

        node->next = curr->next;
        curr->next = node;
        return head;
    }
};

// Function to insert node at end
void append(Node*& head, int data) {
    if (!head) {
        head = new Node(data);
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new Node(data);
}

// Function to print linked list
void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = NULL;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        append(head, x);
    }

    Solution obj;
    head = obj.insertionSort(head);

    cout << "Sorted Linked List: ";
    printList(head);

    return 0;
}

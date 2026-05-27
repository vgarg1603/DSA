#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;


    Node(int val) {
        data = val;
        next = NULL;
    }
    Node(int val, Node* next) {
        data = val;
        this->next = next;
    }
};

class Solution {
    public:
    Node* insertAtHead(Node* head, int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* insertAtTail(Node* head, int data) {
        Node* newNode = new Node(data);
        
        if(!head) { 
            head = newNode;
        }
        else{
            Node* tail = head;
            while(tail->next) {
                tail = tail->next;
            }
            tail->next = newNode;
            tail = newNode;
        }
        return head;
    }

    void printLL(Node* head) {
        Node* curr = head;
        while(curr) {
            cout<<curr->data<<"->";
            curr = curr->next;
        }
        cout<<"\n";
    }

    int length(Node* head) {
        Node* curr = head;
        int len = 0;
        while(curr) {
            len++;
            curr = curr->next;
        }
        return len;
    }
};  

int main()
{
    Solution sol;

    Node* head = new Node(10);
    Node* newHead = sol.insertAtHead(head, 20);

    sol.printLL(newHead);
    
    newHead = sol.insertAtTail(newHead, 30);
    sol.printLL(newHead);

    cout<<sol.length(newHead)<<"\n";
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Node {

    public:

    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* createLinkedList() {
    Node* head = nullptr, *temp = nullptr;
    int x;
    bool yesOrNo = 1;

    while(yesOrNo) {
        cout << "Enter Value: ";
        cin >> x;
        Node* newNode = new Node(x);
        if(head == nullptr) {
            head = newNode;
        }
        else{
            temp->next = newNode;
        }
        temp = newNode;
        cout << endl << "Press 0 to exit or some other number to make more entries" << endl;
        cin >> yesOrNo;
    }
    return head;
}

void print(Node* p) {
    while(p != nullptr) {
        cout << p->data << endl;
        p = p->next;
    }
}

Node* insertAtEnd(Node* head) {
    int x;
    cout << "Enter Value: ";
    cin >> x;

    if(head == nullptr) {
        head = new Node(x);
    }
    else {
        Node* p = head;
        while(p->next != nullptr) {
            p = p->next;
        }
        p->next = new Node(x);
    }
    return head;
}

Node* deleteFromEnd(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    else {
        Node* p = head;
        while(p->next->next != nullptr) {
            p = p->next;
        }
        p->next = nullptr;
    }
    return head;
}

Node* insertAtBeginning(Node* head) {
    int x;
    cout << "Enter Value: ";
    cin >> x;

    if(head == nullptr) {
        head = new Node(x);
    }
    else {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node* deleteFromBeginning(Node* head) {
    if(head == nullptr) {
        return nullptr;
    }
    head = head->next;
    return head;
}

Node* deleteFromParticularPosition(Node* head) {
    cout << "Enter the position: " << endl;
    int pos;
    cin >> pos;

    if(pos == 1) {
        return deleteFromBeginning(head);
    }

    Node* temp = head;

    for(int i = 0; i < pos - 2; i++) {
        temp = temp->next;
    }
    temp->next = temp->next->next;

    return head;
}

Node* insertAtParticularPosition(Node* head) {
    int x, pos;
    cout << "Enter the position at which you want to insert data: ";
    cin >> pos;
    if(pos == 1) {
        return insertAtBeginning(head);
    }

    cout << "Enter the data to be inserted: ";
    cin >> x;

    Node* temp = head;

    for(int i = 0; i < pos - 2; i++) {
        temp = temp->next;
    }
    Node* newNode = new Node(x);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

int main() {

    Node* head = createLinkedList();
    print(head);
    head = deleteFromBeginning(head);
    head = insertAtBeginning(head);
    print(head);
    return 0;
}

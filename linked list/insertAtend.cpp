#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node* node0 = new Node(12);
    Node* node1 = new Node(13);
    Node* node2 = new Node(14);
    Node* node3 = new Node(15);
    Node* node4 = new Node(16);
    Node* node5 = new Node(17);
    Node* node6 = new Node(18);

    node0->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    Node* head = node0;
    Node* temp = head;

    cout << "before insertion" << endl;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;

    // Reset temp to head for traversal to end
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    Node* node7 = new Node(23);
    temp->next = node7;

    temp = head;
    cout << "after insertion" << endl;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}

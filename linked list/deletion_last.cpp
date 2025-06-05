#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    Node* node0 = new Node(4);
    Node* node1 = new Node(5);
    Node* node2 = new Node(6);
    Node* node3 = new Node(7);
    node0->next = node1;
    node1->next = node2;
    node2->next = node3;

    
    Node* head = node0;

  
    // Node* temp1 = head;
    // head = head->next;
    // delete temp1;


   Node* temp = head;


   while (temp->next->next != NULL){
    temp = temp -> next;
   } 
   Node*temp2 =  temp ->next;
   delete temp2;
   
   while(temp != NULL){
    cout<<temp -> data<<" ";
    temp = temp ->next;
   }


    return 0;
}

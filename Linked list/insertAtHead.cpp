#include<bits-stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        //Constructor
        Node(int value){
            this -> data = value;
            this -> next = NULL;
        }
};

void insertHead(Node* &head, int Value){
    Node* temp = new Node(Value);
    //Making the Value of next for temp(new Node) 
    //equal to that of the Main node in Linklist.
    temp->next = head;
    head = temp;
}

void printNode(Node* &head){
    Node* temp = head;
    while (temp!= NULL) {
    cout << temp->data<<"->";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

int main(){
    cout<<"Enter the value: ";
    int value;
    cin>>value;
    Node* node1 = new Node(value);
    cout<<"Enter the another value: ";
    cin>>value;
    insertHead(node1, value);
    printNode(node1);
    Node* node2 = new Node(value);
    printNode(node2);
}
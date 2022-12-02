#include<bits-stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

     //Constructor
     Node(int value){
        this->data = value;
        this->next = NULL;
     }
};

void insertTail(Node* &head, int value){
    Node* Last = head;
    while (Last->next!=NULL)
    {
        Last = Last->next;
    }
    Node* Temp = new Node(value);
    Last->next = Temp;

}

void printNode(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){
    cout<<"How many elements want to enter: ";
    int size = 0;
    Node* head;
    cin>>size;
    for (int i = 0; i < size; i++)
    {   
        int value;
        if(i==0){
            cout<<"Enter the value: ";
            cin>>value;
            head = new Node(value);
            printNode(head);
            continue;
        }
        cout<<"Enter the value: ";
        cin>>value;
        insertTail(head, value);
        printNode(head);
    }
    cout<<"Main Linked List: ";
    printNode(head);
}
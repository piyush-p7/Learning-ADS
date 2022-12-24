#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//Linked List implementing..
class Node{
    public:
        int data;
        Node* next;

        //Constructor
        Node(int value){
            this -> data = value;
            this -> next = NULL;
        }

        //Destructor (Memory free implementation)
        ~Node(){
            int value = this->data;
            if(this->next!=NULL){
                //Memory free here happens..
                delete next;
                this->next = NULL;
            }
            cout<<"Memory is free having the value "<<value<<"."<<endl;
        }
};

void deleteNode(Node* &head, int pos){
    //If want to delete the first element of the node.
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        //NULL in order to remove the link between the next node and temp node.
        temp->next = NULL;
        //Memory free at start node.
        delete temp;

    }
    //If want to delete the middle node or Last Node.
    else{
        Node* cur = head;
        Node* prev = NULL;
        for (int i = 1; i < pos; i++)
        {
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}

void printNode(Node* &head){
    Node* temp = head;
    while (temp!= NULL) {
    cout << temp->data<<"->";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

void insertTail(Node* &head, int val){
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    //Creating the node..
    Node *N1 = new Node(val);
    temp->next = N1;

}

int main(){
    cout<<"Enter the size for linked List: ";
    int value;
    Node* head;
    cin>>value;
    for (int i = 0; i < value; i++)
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

    cout<<"\nWhich Position want to delete: ";
    int pos = 0;
    cin>>pos;
    deleteNode(head, pos);
    printNode(head);
    
}
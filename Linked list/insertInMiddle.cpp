#include<bits/stdc++.h>
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

void insertAtTail(Node* &head, int value){
    Node* check = head;
    while (check->next!=NULL)
    {
        check = check->next;
    }
    Node* temp = new Node(value);
    check->next = temp;
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

void insertHead(Node* &head, int Value){
    Node* temp = new Node(Value);
    //Making the Value of next for temp(new Node) 
    //equal to that of the Main node in Linklist.
    temp->next = head;
    head = temp;
}

void insertInMiddle(Node* &head, int indexAdd){
    if(indexAdd == 0){
        cout<<"0 is not a correct index"<<endl;
        cout<<"Enter the index again(Other than 0): ";
        cin>>indexAdd;
        insertInMiddle(head, indexAdd);
        return;
    }
    int val = 0;
    cout<<"Enter the value: ";
    cin>>val;
    if(indexAdd == 1){
        insertHead(head, val);
        return;
    }
    int index = 1;
    Node* temp = head;
    Node* NewNode = new Node(val);
    while (index!=indexAdd-1)
    {
        temp = temp->next;
        index++;
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
}

int main(){
    int size = 0;
    cout<<"Number of entries: ";
    cin>>size;
    Node* head;
    for (int i = 0; i < size; i++)
    {
        int value = 0;
        if(i==0){
            cout<<"Enter the value: ";
            cin>>value;
            head = new Node(value);
            continue;
        }
        
        cout<<"Enter the value: ";
        cin>>value;
        insertAtTail(head, value);
    }
    printNode(head);
    cout<<"At which number you want to enter the new node: ";
    int indexAdd;
    cin>>indexAdd;
    insertInMiddle(head, indexAdd);
    printNode(head);
    return 0;
}
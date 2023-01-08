#include<bits/stdc++.h>
using namespace std;

class NodeDL{
    public:
        int data;
        NodeDL* prev;
        NodeDL* next;
        
        //Constructor
        NodeDL(int val){
            this->data = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insertTail(NodeDL* &head, int val){
    NodeDL* temp = head;
    NodeDL* N1 = new NodeDL(val);
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = N1;
    N1->prev = temp;
}

void printNode(NodeDL* &head){
    NodeDL* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void reversePrint(NodeDL* &head){
    NodeDL* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<"NULL\n";
    
    
}

int main(){
    int size = 0;
    cout<<"Number of values: ";
    cin>>size;
    NodeDL* head;
    for (int i = 0; i < size; ++i)
    {
        int value;
        if(i==0){
            cout<<"Enter the value: ";
            cin>>value;
            head = new NodeDL(value);
            printNode(head);
            continue;
        }
        cout<<"Enter the value: ";
        cin>>value;
        insertTail(head, value);
        printNode(head);
    }
    cout<<"print left to right: ";
    printNode(head);
    cout<<endl<<"print right to left: ";
    reversePrint(head);
    return 0;

}
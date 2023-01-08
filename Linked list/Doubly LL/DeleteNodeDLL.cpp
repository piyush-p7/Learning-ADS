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
        ~NodeDL(){
            int val = this->data;
            if(next != NULL){
                delete next;
                next = NULL;
            }
            cout<<"\nFreed memory of node having the data: "<<val<<endl;
        }
};

void insertPosition(NodeDL* &head, NodeDL* &tail,int pos, int val){
    if(head == NULL){
        NodeDL* N1 = new NodeDL(val);
        head = N1;
        tail = N1;
    }
    else{
        NodeDL* Temp = head;
        int temp = 1;
        while (temp<pos-1){
            Temp = Temp->next;
            temp++;
        }
        NodeDL* InsertNode = new NodeDL(val);
        InsertNode->next = Temp->next;
        Temp->next->prev = InsertNode;
        InsertNode->prev = Temp;
        Temp->next = InsertNode;
    }
    

}

void insertHead(NodeDL* &head, NodeDL* &tail, int val){
    if(head == NULL){
        NodeDL* N1 = new NodeDL(val);
        head = N1;
        tail = N1;
    }
    else{
        NodeDL* temp = head;
        NodeDL* N1 = new NodeDL(val);
        temp->prev = N1;
        N1->next = temp;
        head = N1;
    }
}

void insertTail(NodeDL* &head, NodeDL* &tail, int val){
    if(head == NULL){
        NodeDL* N1 = new NodeDL(val);
        head = N1;
        tail = N1;
    }
    else{
        NodeDL* temp = tail;
        NodeDL* N1 = new NodeDL(val);
        temp->next = N1;
        N1->prev = temp;
        tail = N1;
    }
}

void printNode(NodeDL* &head){
    NodeDL* temp = head;
    cout<<"NULL<-";
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void DeleteNode(NodeDL* &head, int pos){
    
    if(pos == 1){
        NodeDL* Temp = head;
        Temp->next->prev = NULL;
        head = Temp->next;
        Temp->next = NULL;
        delete Temp;
    }

    else{
        int temp = 1;
        NodeDL* Temp = head;
        NodeDL* Prev = NULL;
        while (temp<pos)
        {
            Prev = Temp;
            Temp = Temp->next;
            temp++;
        }
        Prev->next = Temp->next;
        Temp->next = NULL;
        delete Temp;   
    }
     
}

int main(){
    NodeDL* head = NULL;
    NodeDL* tail = NULL;

    insertHead(head,tail, 12);
    insertHead(head,tail, 13);
    insertHead(head,tail, 1);
    insertHead(head,tail, 2);
    insertHead(head,tail, 32);
    insertTail(head,tail, 123);
    insertPosition(head,tail, 2, 99);
    printNode(head);
    DeleteNode(head, 2);
    printNode(head);
    DeleteNode(head, 1);
    printNode(head);
    DeleteNode(head, 5);
    printNode(head);

}
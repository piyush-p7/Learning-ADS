#include<bits-stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        //Constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};


int main(){
    cout<<"Enter the value: ";
    int value = 0;
    cin>>value;
    Node myNode = Node(value);
    cout<< "Entered value: "<<myNode.data<<" ,Address is: "<<myNode.next;
    return 0;

}
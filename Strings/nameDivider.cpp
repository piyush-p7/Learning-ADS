#include<iostream>
using namespace std;

void nameDivide(string name){
    string firstName, middleName, lastName;
    int i=0;
    for(i=0;i<name.size();i++){
        if(name[i] == '_'){
            break;
        }
        firstName+=name[i];
    }
    cout<<"First Name: "<<firstName;
    for(i++;i<name.size();i++){
        if(name[i] == '_'){
            break;
        }
        middleName+=name[i];
    }

    if(i>=name.size()){
        string temp = middleName;
        middleName = "null";
        lastName = temp;

    }
    else{
        for(i++;i<name.size();i++){
            lastName+=name[i];
        }
    }
    cout<<"\nMiddle Name: "<<middleName;
    cout<<"\nLast Name: "<<lastName;
}
int main() {
    string fullName = "";
    cout<<"Enter the full name: ";
    cin>>fullName;
    nameDivide(fullName);
    return 0;
}
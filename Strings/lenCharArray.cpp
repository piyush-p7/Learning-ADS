#include<iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for (int i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char arr[10];
    cout<<"ENTER THE STRING: ";
    cin>> arr;
    cout<< "Length is : "<<getLength(arr);
}
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
void reverse(char arr[]){
    for (int i = 0, j=getLength(arr)-1; i <= j; i++,j--)
    {
        swap(arr[i], arr[j]);
    }
    cout<<arr;
    
}

int main(){
    char arr[10];
    cout<<"ENTER THE STRING: ";
    cin>> arr;
    cout<< "Reversing the array: ";
    reverse(arr);
}
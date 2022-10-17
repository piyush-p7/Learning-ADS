#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> readers;
    vector<int> writers;
    int noRead = 0;
    int noWrite = 0;
    cout<<"Enter the number of readers: ";
    cin>>noRead;
    cout<<"Enter the number of writers: ";
    cin>>noWrite;
    for (int i = 1;i <= noRead; i++)
    {
        readers.push_back(i);
    }
    for (int i = 1;i <= noWrite; i++)
    {
        writers.push_back(i);
    }
    cout<<"Readers are: ";
    for (int i = 0;i < noRead; i++)
    {
        cout<<readers[i]<<" ";
    }
    cout<<endl;
    cout<<"Writers are: ";
    for (int i = 0;i < noWrite; i++)
    {
        cout<<writers[i]<<" ";
    }
    int processes = noRead + noWrite;
    int start = 1;
    int writersDone = 0;
    int readersDone = 0;
    bool check = true;
    bool checkReader = false;
    while (start<=processes)
    {
        cout<<"\n---------ENTER NUMBER RELATED TO THE PROCESS---------\nFor reader - 1\nFor Writer - 2\nFor taking back the resource - 3\nEnter which process to take place first: ";
        int num;
        cin>>num;
        switch (num)
        {
        case 1:
            if (readersDone == noRead)
            {
                cout<<"\n****No Readers remaining****\n";
                break;
            }
            else if(check == true){
            cout<<"\n****READER taking the resource****\n";
            start++;
            checkReader = true;
            readersDone++;
            break;
            }
            else{
                cout<<"\n_______WRITER IS ALREADY HAVING THE RESORCE_______\n";
                break;
            }
        case 2:
            if (writersDone == noWrite)
            {
                cout<<"\n****No Writers remaining****\n";
                break;
            }
            if (check==false)
            {
                cout<<"\nAnother write process is already executing.\n";
                break;
            }
            if(checkReader==false){
            cout<<"\n****WRITERS taking the resource****\n";
            check = false;
            writersDone++;
            start++;
            break;
            }
            else{
                cout<<"\n_____READ IS ALREADY HAVING THE RESOURCE_____\n";
                break;
            }
        case 3:
            if (check==false || checkReader==true)
            {
                cout<<"\n+++Resource is now free.+++\n";
                check = true;
                checkReader = false;
                break;
            }
            else{
                cout<<"\n--Resouce is already free.--\n";
                break;
            }
        default:
            cout<<"\nWrong value entered!!\n";
            break;
        }
    }
}
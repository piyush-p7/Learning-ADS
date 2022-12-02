#include<bits-stdc++.h>
using namespace std;

class memory{
public: 
    unordered_set<int> ls;
    vector<int> mainMem;

    
};

int main(){
    vector<string> mainMemories;
    bool check = true;
    while (check)
    {
        int pos = -1;
        //Various Functionalities are below enlisted
        cout<<"\nBelow is the specified number for specified function:-";
        cout<<"\n1 - Make new entry for main memory partioning.";
        cout<<"\n2 - Change partioning of any main memory.";
        cout<<"\n3 - See number of main memories created.";
        cout<<"\n4 - For viewing process in main memory(Before Compaction).";
        cout<<"\n5 - For viewing process in main memory(After Compaction).";
        cout<<"\n6 - For quiting.";
        cout<<"\nEnter: ";
        cin>>pos;
        switch (pos)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4: 
            break;
        case 5:
            break;
        case 6:
            cout<<"\nThank you! (Project for visualizing Compaction in OS)";
            check = false;
            break;
        default:
            cout<<"\nWrong value entered\n";
            break;
        }
    }
    
}
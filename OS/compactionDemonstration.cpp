#include<bits-stdc++.h>
using namespace std;

//Function for Random index getting
int getRandoms(int lower, int upper,unordered_set<int>&ls){
    int num;
	for (int i = 0; i < 1; i++) {
		num = (rand() %
		(upper - lower + 1)) + lower;
	}
    if (ls.find(num) != ls.end()) {
        getRandoms(lower, upper, ls);
    }
    else {
        ls.insert(num);
    }
    return num;
}

//Function for adding the process into the Main Memory
void writeProcess(vector<int> &vec){
    cout<<"\nEnter the number of Blocks(Each block represents 1 memory unit \nin main memory): ";
    int numBlock = 0;
    cin>>numBlock;
    vector<int> ans(numBlock,0);
    vec = ans;
}

//For Entering the process into the Main Memory
void enterProcess(vector<int>&vec, int process,unordered_set<int>&ls){
    int size = vec.size();
    if(process>size){
        //If the number of process to be entered is more than main memory size
        cout<<"\nNo of process is greater than main memory size.\n";
    }
    else{
        for(int i=0;i<process;i++){
            int index = getRandoms(0, size-1,ls);
            vec[index]=1;
        }
    }
}

void getMemory(vector<int> &vec){
//Visiualizing the main memory and the processes
    int size = vec.size();
    if(size==0){
        cout<<"\nFirst enter number of process\n";
        return;
    }
    int mid = 0;
    switch (size)
    {
    case 1:
        mid = 0;
        break;
    case 2:
        mid = 1;
        break;
    default:
        mid = size/2;
        break;
    }
    cout<<"\nVisualization of main memory\n          /\\\n";

    for (int i = 0; i < size; i++)
    {   
        if (vec[i]==1 && i == mid)
        {
            cout<<"[#######]  "<<size <<endl;
        }
        else if(vec[i]==1 && i != mid)
        {
            cout<<"[#######]  |\n";
        }
        else if(vec[i]==0 && i!=mid) cout<<"[-------]  |\n";
        else{
            cout<<"[-------]  "<<size<<endl;
        }
    }
    cout<<"          \\/\n";
}

//for implementing the compaction;
void doCompaction(vector<int>vec,unordered_set<int>ls){
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    getMemory(vec);
}

int main(){
    //List for storing the indexes which are used by the process
    unordered_set<int>ls;
    //Here is the main memory initially we set all the memory units as empty;
    vector<int>mainMem;
    bool check = true;
    int process=0;
    while(check)
    {
        int pos = 0;
        //Various Functionalities are below enlisted
        cout<<"\nBelow is the specified number for specified function:-";
        cout<<"\n1 - For Main memory size.";
        cout<<"\n2 - For entering any Process.";
        cout<<"\n3 - For viewing process in main memory(Before Compaction).";
        cout<<"\n4 - For viewing process in main memory(After Compaction).";
        cout<<"\n5 - For quiting.";
        cout<<"\nEnter: ";
        cin>>pos;
        switch (pos)
        {
        case 1:
            writeProcess(mainMem);
            break;
        case 2:
            cout<<"\nHow many process want to enter in the main memory: ";
            cin>>process;
            enterProcess(mainMem, process,ls);
            break;
        case 3:
            getMemory(mainMem);
            break;
        case 4:
            doCompaction(mainMem,ls);
            break;
        case 5:
            cout<<"\nThank you! (Project for visualizing Compaction in OS)";
            check = false;
            break;
        default:
            cout<<"\nWrong value entered\n";
            break;
        }
    }
}
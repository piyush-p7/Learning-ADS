#include<bits-stdc++.h>
using namespace std;

class memory{
public: 
    unordered_set<int> ls;
    vector<int> vec;

    memory(int size){
        vector<int>vector(size,0);
        this->vec = vector;
    }

    //Function for Random index getting
    int getRandoms(int lower, int upper,unordered_set<int>&ls){
        ls = this->ls;
        int num;
        num = (rand() % (upper - lower + 1)) + lower;
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
        vec = this->vec;
        cout<<"\nEnter the number of Blocks(Each block represents 1 memory unit \nin main memory): ";
        int numBlock = 0;
        cin>>numBlock;
        vector<int> ans(numBlock,0);
        vec = ans;
    }

    //For Entering the process into the Main Memory
    void enterProcess(vector<int>&vec, int process,unordered_set<int>&ls){
        ls = this->ls;
        vec = this->vec;
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
        vec= this->vec;
        //Visiualizing the  main memory and the processes
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
        ls = this->ls;
        vec = this->vec;
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        getMemory(vec);
    }

};

int main(){
    unordered_set<string> mainMemories;
    string nameMem="";
    bool check = true;
    int i = 1;
    int size = 0;
    memory obj(size);
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
            cout<<"Enter the name for your main memory: ";
            cin>>nameMem;
            if(mainMemories.find(nameMem)==mainMemories.end()){
                mainMemories.insert(nameMem);
            }
            else{
                cout<<"This name is already used.\n";
            }
            cout<<"Enter the no.of pages into which it should be divided: ";
            cin>>size;
            obj = memory(size);
            break;
        case 2:
            
            break;
        case 3:
            
            for ( auto it = mainMemories.begin(); it != mainMemories.end(); ++it ,i++) 
                cout << i<<" -> " << *it<<endl;
            i = 1;
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
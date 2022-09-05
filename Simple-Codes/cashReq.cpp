#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cin >>a;
    int num100=0,num50=0,num20=0,num10=0,num1 = 0;
    while(a!=0 && a>0){
        cout<<"Type 1,2,3,4,5 accordingly\n 1 - 100s\n 2 - 50s\n 3 - 20s\n 4 - 10s\n 5 - 1s\n";
        int num = 0;
        cin>>num;
        
        switch (num)
        {
        case 1: //100s
                num100= a/100;
                a = a - (num100*100); 
                cout<<num100<<" 100s\nRemaining: "<<a<<endl;
                break;
        case 2: //50s
                num50 = a/50;
                a = a - (num50*50); 
                cout<<num50<<" 50s\nRemaining: "<<a<<endl;
                break;
        case 3: //20s
                num20 = a/20;
                a = a - (num20*20); 
                cout<<num20<<" 20s\nRemaining: "<<a<<endl;
                break;
        case 4: //10s
                num10 = a/10;
                a = a - (num10*10); 
                cout<<num10<<" 10s\nRemaining: "<<a<<endl;
                break;
        case 5: //1s
                num1 = a;
                cout<<a<<" 1s"<<endl;
                a = a-a;
                break;
        }
    }
    cout<<"CASH BELOW\n"<<num100<<" 100s\n "<<num50<<" 50s\n "<<num20<<" 20s\n "<<num10<<" 10s\n "<<num1<<" 1s\n";
}
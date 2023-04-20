#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        int x = 10;
        double y = 10.99;

        void print(){
            cout<<"I'm base class"<<endl;
        }

        void print(int a, double b){
            this->x = a;
            this->y = b;
            cout<<"ValuesChanged "<<this->x<<", "<<this->y<<endl;
        }
};

int main(){
    A ob1 = A();
    ob1.print();
    ob1.print(3, 4.99);
    ob1.print(2, 2.3);
    return 0;
}
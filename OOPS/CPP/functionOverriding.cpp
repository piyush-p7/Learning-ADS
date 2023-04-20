#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        int x = 10;
        double y = 10.99;

        void print(){
            cout<<"I'm base class, " <<this->x<<", "<<this->y<<endl;
        }
};

class B : public A{
    public:
        void print(){
            cout<<"I'm Derived class, "<<this->x<<", "<<this->y<<endl;
        }
};

int main(){
    A ob1 = A();
    B ob2 = B();
    // B ob3 = A(); - this will create error
    A ob4 = B(); //this is concept of object slicing

    ob1.print();
    ob2.print();
    ob4.print();



    return 0;
}
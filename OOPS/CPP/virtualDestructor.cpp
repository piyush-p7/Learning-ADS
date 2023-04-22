#include <bits/stdc++.h> 
using namespace std;

class a{
    public:
    a(){
        cout<<"base constructor\n";
    }
    virtual ~a(){
        cout<<"Base destructor\n";
    }
};

class b : public a{
    public:
        b(){
            cout<<"Derived constructor\n";
        }

        ~b(){
            cout<<"Derived destructor\n";
        }
};


int main(int argc, char const *argv[])
{
    a* ob = new b();
    delete ob;
    return 0;
}

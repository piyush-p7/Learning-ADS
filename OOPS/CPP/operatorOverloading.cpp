#include <iostream>

using namespace std;
class example{
  int a, b;
  public:
    void getter(){
        cout<<this->a<<", "<<this->b<<endl;
    }
    
    void setter(){
        cin>>this->a;
        cin>>this->b;
    }
    
    //To use ob++
    void operator ++(int){
        this->a = 10+this->a;
        this->b = 10+this->b;
    }

    //To use ++ob
    void operator ++(){
        this->a = 2+this->a;
        this->b = 2+this->b;
    }
    
};
int main()
{
    example ob;
    ob.setter();
    ob.getter();
    ob++;
    ob.getter();
    ++ob;
    ob.getter();

    return 0;
}

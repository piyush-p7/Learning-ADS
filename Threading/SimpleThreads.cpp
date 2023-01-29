#include <iostream>
#include <thread>
using namespace std;
void func1()
{
    std::cout << "Thread 1 is executing" << std::endl;
}

int main()
{
    thread t1(func1);
    t1.join();
    return 0;
}

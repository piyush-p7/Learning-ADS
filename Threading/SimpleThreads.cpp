#include <iostream>
#include <thread>
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

void func1()
{
    for (int i = 0; i < 10; i++)
    {
        sleep(1);
        std::cout << "Thread 1 is executing: " << i <<std::endl;
        fflush(stdout);
    }
    
}
void func2()
{
    for (int i = 0; i < 10; i++)
    {
        sleep(1);
        std::cout << "\nThread 2 is executing: " << i << std::endl;
        fflush(stdout);
    }      
}

int main()
{
    thread t1(func1);
    thread t2(func2);

    t1.join();
    t2.join();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class SuperClass
{
    public:
    void print()
    {
        cout << "superclass의 print()" << endl;
    }
};

class ChildClass : public SuperClass
{
    public:
    void print()
    {
        SuperClass::print();
        cout << "childclass의 print()"<<endl;
    }
};
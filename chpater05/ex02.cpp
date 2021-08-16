#include<iostream>
using namespace std;
class Time
{
    protected:
    int hour;
    int minute;

    public:
    Time()
    {
        hour = 0;
        minute = 0;
    }
    void print()
    {
        cout << hour << ":" << minute << endl;
    }
};


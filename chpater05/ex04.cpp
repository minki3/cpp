#include<iostream>
using namespace std;
class Time
{
    protected:
    int hour;
    int minute;

    public:


    Time(int h=0, int m=0): hour(h), minute(m)
    {}

    void print()
    {
        cout << hour << ": " << minute<<endl;
    }
};

int main()
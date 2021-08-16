#include<iostream>
#include<string>
using namespace std;

class circle
{
    public:
    int radius;
    string color;

    double calcArea()
    {
        return 3.14 * radius * radius;
    }
};

int main(int argc, char const *argv[])
{
    circle obj;
    obj.radius =100;
    obj.color = "blue";

    cout <<"원의 면적 "<< obj.calcArea() << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Rectangle: public Shape
{
    int width, height;

    public:
    Rectangle()
    {
        cout << "Rectangle() 생성자" << endl; 
    }
    Rectangle(int x, int y, int w, int h): Shape(x,y), width(w), height(h)
    {
        cout << "Rectangle(x, y, w, h) 생성자" << endl;
    }

    ~Rectangle()
    {
        cout << "~Rectangle() 소멸자" << endl;
    }    
};

int main()
{
    Rectangle r1;
    cout << endl;
    Rectangle r2(0, 0, 100, 100);
    cout << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Animgal
{
    public:
    void speak()
    {
        cout << "동물이 소리를 내고 있습니다." << endl;
    }    
};

class Dog : public Animgal
{
    public:
        void speak()
        {
            cout << "개가 소리를 내고 있음" << endl;
        }
};
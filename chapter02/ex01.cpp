#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool b;
    b = (1==2);

    // cout << std::boolalpha; bool을 ture, false로 출력
    cout << boolalpha;
    cout << b << endl;
    
    return 0;

}
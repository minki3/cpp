#include <iostream>
#include <string>
using namespace std;

int main()
{
    string list[] = {"홍길동", "고길동", "둘리"} ;

    for(auto& name : list)
    {
        cout << name << endl;
    }
return 0;
}
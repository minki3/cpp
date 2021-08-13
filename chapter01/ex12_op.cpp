#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 100;
    int y = 200;

    int result = x +y;
    cout << "x/y : " << x/y << endl; //정수에 대한 나누기 결과는 정수처리가 됨
    cout << "x/(double)y : " << x/(double)y << endl; //(타입) : 캐스팅 연산자()  - 지정한 타입으로 형변환
    cout << "x%3 : " << x%3 << endl;
    return 0;

}
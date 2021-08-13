#include <iostream>
using namespace std;


//cpp 지역 변수 : {} 블럭 안에 선언된 변수
int main()
{
    int sum =0;  // main 함수의 지역변수
    for(int i=0; i<=10; i++)  // i = for 문 블럭에 선언된 지역변수
    {
        sum += i;
    }

    cout<< "1부터 10까지의 정수 합 :"<< sum << endl;
return 0;
}
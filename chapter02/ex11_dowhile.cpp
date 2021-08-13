#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;

    do
    {
        cout << "문자열을 입력하세요. : ";
        getline(cin, str); // 스페이스나 공백 특수문자 사용 가능
        // cin>> str; 공백에 의해서 데이터가 구분

        cout << "사용자의 입력 : " << str << endl;
    }
    while(str != "exit");
    

    return 0;
}
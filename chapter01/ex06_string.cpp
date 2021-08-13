#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string s1 = "good";
    string s2 = "morning";
    string s3 = s1 + " " + s2 + "!";
    

    string s4 = "good";
    string s5 = "bad";
    bool b = (s4 == s5);
    cout << b << endl;
}
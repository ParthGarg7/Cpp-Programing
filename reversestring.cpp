#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "abcd";
    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {
        swap(str[i], str[len - 1 - i]);
    }

    cout << str;
    return 0;
}
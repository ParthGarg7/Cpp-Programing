#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "abcde";
    int len = 0;
    char c = '\0';
    int i = 0;
    while(str[i] != c)
    {
        len += 1;
        i +=1;
    }
    cout << len;
    return 0 ; 
}

#include <iostream>
using namespace std;

void f1()
{
    // normal local variable 
    int c1 = 0;

    c1++;
    cout << c1 << " ";
}

void f2()
{
    // static local variable 
    // value is not going to initialize  again and again 
    // value will be stored after the function end
    static int c2 = 0;

    c2++;
    cout << c2 << " ";
}

int main()
{
    for (int i = 0; i < 5; i++)
        f1();

    cout << endl;

    for (int i = 0; i < 5; i++)
        f2();
    return 0;
}
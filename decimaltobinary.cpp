#include <iostream>
using namespace std;

int main() {
    cout << "Enter a decimal number: ";
    int n1;
    cin >> n1;

    int num = n1;
    long long binary = 0;
    int i = 1;

    while (n1 > 0) {
        int rem = n1 % 2;
        binary += rem * i;
        n1 /= 2;
        i *= 10;
    }

    cout << "The binary of " << num << " is " << binary << endl;
    return 0;
}

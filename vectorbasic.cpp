#include <bits/stdc++.h>

using namespace std;

int main()
{
    // initialization of a new vector
    vector<int> v = {1,2,3,4,};

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(5);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for(int i = 0; i < v.size() ;i++){
        cout << v[i] << endl;
    }

    

    return 0;
}

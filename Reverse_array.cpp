#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>&);

int main()
{
    vector<int> arr = {23,34,21,58,33,2,29,95,87};

    cout << "Original array: " << endl;
    for(auto x :arr)
    cout << x << " ";

    cout << endl;

    Reverse(arr);

    cout << "Reversed array: " << endl;
    for(auto x :arr)
    cout << x << " ";
    
    return 0;
}

void Reverse(vector<int>& arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start +=1;
        end -= 1;
    }

   
}
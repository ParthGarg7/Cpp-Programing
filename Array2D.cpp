#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // This program have the code of creating a 2D array in cpp
    // method 1 is simple declaration int array[3][3]

    /* method 2 is using new key word int** Array = new int*[row] and now every element is also array so Array[i](0 yo row - 1)
    Array[i] = new int[column]

    Creating a 2D array dynamically
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];

    Freeing memory
    for (int i = 0; i < rows; i++)
        delete[] arr[i];

    delete[] arr;

    */

    /*Now the method 3 is using the vector and there are many ways in this method */

    // 1st

    vector<vector<int>> Array1; // an empty 2d array elements can only be assigned by using the .push_back operation

    Array1.push_back({1, 2, 3});

    // 2nd

    int row = 3, col = 2;

    vector<vector<int>> Array2(row, vector<int>(col));

    // 2.1 (if want vector to have all the inital values set to 0)

    vector<vector<int>> Array3(3, vector<int>(3, 0));

    for (auto &x : Array3)
    {
        for (auto y : x)
            cout << y << " ";

        cout << endl;
    }
}
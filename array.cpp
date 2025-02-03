#include <iostream>
using namespace std;

int main()
{
    int size, choice;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int *arr = new int[size]; // dynamically allocating the memory of the array

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The original Array is " << endl;
    for (int i = 0; i < size; i++)
        cout << i << " " << endl;

    cout << "Enter 0 for exit" << endl;
    cout << "Enter 1 for insertion at beginning position" << endl;
    cout << "Enter 2 for insertion at end position" << endl;
    cout << "Enter 3 for insertion at specific position " << endl;
    cout << "Enter 4 for deletion at beginning position " << endl;
    cout << "Enter 5 for deletion at end position " << endl;
    cout << "Enter 6 for deletion at specific position " << endl;
    cin >> choice;

    switch (choice)
    {
    case 0:
        break;

    case 1:
        InsertAtBeg();
        break;

    case 2:
        InsertAtEnd();
        break;

    case 3:
        InsertAtPos();
        break;

    case 4:
        DeleteAtBeg();
        break;

    case 5:
        DeleteAtEnd();
        break;

    case 6:
        DeleteAtPos();
        break;
        
    default:
        break;
    }

    delete[] arr; // To free the allocated memory of the array
}

void InsertAtBeg()
{
}

void InsertAtEnd()
{
}

void InsertAtPos()
{
}

void DeleteAtBeg()
{
}

void DeleteAtEnd()
{
}

void DeleteAtPos()
{
}
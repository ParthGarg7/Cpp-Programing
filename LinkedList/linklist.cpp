#include <iostream>
#include <vector>

using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};



void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to delete the linked list (free memory)
void deleteList(Node* head) {
    Node* temp;
    while(head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    vector<int> arr = {1,2,3,45,67,4,9,4};

    Node* head = NULL;
    Node* temp = NULL;

    int n = arr.size();

    for(int i = 0; i < n ; i++)
    {
        if(head == NULL)
        {
            head = new Node(arr[i]);
            temp = head;

        }
        else
        {
            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }

    printList(head);
    deleteList(head);
    

    return 0;
}
// Delete all occurrences of a key in Doubly Linked List
#include<bits/stdc++.h>
using namespace std;
class nodes
{
public:
    int data;
    nodes* next;
    nodes* back;
    nodes(int data1, nodes* next1, nodes* back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    nodes(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
nodes* convertArr2DLL(vector<int>& arr)
{
    nodes* head = new nodes(arr[0]);
    nodes* prev = head;
    for(int i = 1; i < arr.size(); i++)
    {
        nodes* temp = new nodes(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void printDLL(nodes* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
nodes* deleteKey(nodes* head, int key)
{
    nodes* temp = head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            if(temp == head)
                head = temp->next;
            nodes* newNode = temp->next;
            nodes* prevNode = temp->back;
            if(newNode != NULL)
                newNode->back = prevNode;
            if(prevNode != NULL)
                prevNode->next = newNode;
            delete temp;
            temp = newNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    vector<int> arr = {10,20,10,30,10,40,50,10};
    nodes* head = convertArr2DLL(arr);
    cout << "Original Doubly Linked List : ";
    printDLL(head);
    int key;
    cout << "Enter the key to delete : ";
    cin >> key;
    head = deleteKey(head, key);
    cout << "Linked List after deletion : ";
    printDLL(head);
    return 0;
}
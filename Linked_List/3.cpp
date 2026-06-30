// Reversing 2D Linked List
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node* back;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    Node(int data1, Node* next1, Node* back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};
Node* convertArr2DLL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);

        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void printDLL(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* reverseDLL(Node* head)
{
    Node* last = NULL;
    Node* current = head;
    while(current != NULL)
    {
        last = current->back;
        current->back = current->next;
        current->next = last;
        current = current->back;
    }
    if(last != NULL)
        head = last->back;
    return head;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2DLL(arr);
    cout << "Original Doubly Linked List: ";
    printDLL(head);
    head = reverseDLL(head);
    cout << "Reversed Doubly Linked List: ";
    printDLL(head);
    return 0;
}
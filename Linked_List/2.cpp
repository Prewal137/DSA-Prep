// Deleting a node from a linked list without head pointer
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }
};
Node* convertArr2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(Node* node)
{
    node->data = node->next->data;
    Node* temp = node->next;
    node->next = node->next->next;
    delete temp;
}
int main()
{
    vector<int> arr = {4,5,1,9};
    Node* head = convertArr2LL(arr);
    cout << "Original Linked List: ";
    printLL(head);
    Node* node = head->next; 
    deleteNode(node);
    cout << "Linked List after deletion: ";
    printLL(head);
    return 0;
}
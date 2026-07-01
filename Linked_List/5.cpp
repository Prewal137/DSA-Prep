// Reversed Linked list 1dll
// Reverse a Linked List
#include<bits/stdc++.h>
using namespace std;
class nodes
{
public:
    int data;
    nodes* next;
    nodes(int data1, nodes* next1)
    {
        data = data1;
        next = next1;
    }
    nodes(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
nodes* convertArr2LL(vector<int>& arr)
{
    nodes* head = new nodes(arr[0]);
    nodes* mover = head;
    for(int i = 1; i < arr.size(); i++)
    {
        nodes* temp = new nodes(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {2,3,6,7,8};
    nodes* head = convertArr2LL(arr);
    nodes* temp = head;
    nodes* prev = NULL;
    while(temp != NULL)
    {
        nodes* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    cout << "Reversed linked list is : ";
    temp = prev;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
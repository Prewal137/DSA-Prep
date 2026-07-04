// Add 1 to a number represented as a linked list
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

void printLL(nodes* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int helper(nodes* temp)
{
    if(temp == NULL)
        return 1;
    int carry = helper(temp->next);
    temp->data = temp->data + carry;
    if(temp->data < 10)
        return 0;

    temp->data = 0;
    return 1;
}
nodes* addOne(nodes* head)
{
    int carry = helper(head);
    if(carry == 1)
    {
        nodes* newNode = new nodes(1);
        newNode->next = head;
        return newNode;
    }
    return head;
}
int main()
{
    vector<int> arr = {9,9,9};
    nodes* head = convertArr2LL(arr);
    cout << "Original Linked List : ";
    printLL(head);
    head = addOne(head);
    cout << "After Adding One : ";
    printLL(head);
    return 0;
}
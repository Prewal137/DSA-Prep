// Sort Linked List
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
nodes* findMiddle(nodes* head)
{
    nodes* slow = head;
    nodes* fast = head->next;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
nodes* merge(nodes* t1, nodes* t2)
{
    nodes* dummyNode = new nodes(-1);
    nodes* temp = dummyNode;
    while(t1 != NULL && t2 != NULL)
    {
        if(t1->data < t2->data)
        {
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else
        {
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }
    if(t1 != NULL)
        temp->next = t1;
    else
        temp->next = t2;

    return dummyNode->next;
}
nodes* sortLL(nodes* head)
{
    if(head == NULL || head->next == NULL)
        return head;
    nodes* middle = findMiddle(head);
    nodes* leftHead = head;
    nodes* rightHead = middle->next;
    middle->next = NULL;
    leftHead = sortLL(leftHead);
    rightHead = sortLL(rightHead);
    return merge(leftHead, rightHead);
}

int main()
{
    vector<int> arr = {4,2,1,3,5};
    nodes* head = convertArr2LL(arr);
    cout << "Original Linked List : ";
    printLL(head);
    head = sortLL(head);
    cout << "Sorted Linked List : ";
    printLL(head);
    return 0;
}
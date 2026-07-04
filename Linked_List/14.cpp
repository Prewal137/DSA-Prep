// Sort Linked List with 0's 1's and 2's
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
nodes* sortLL(nodes* head)
{
    if(head == NULL || head->next == NULL)
        return head;
    nodes* zeroHead = new nodes(-1);
    nodes* oneHead = new nodes(-1);
    nodes* twoHead = new nodes(-1);
    nodes* zero = zeroHead;
    nodes* one = oneHead;
    nodes* two = twoHead;
    nodes* temp = head;
    while(temp != NULL)
    {
        if(temp->data == 0)
        {
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1)
        {
            one->next = temp;
            one = temp;
        }
        else
        {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    zero->next = (oneHead->next != NULL) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = NULL;
    nodes* newHead = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return newHead;
}

int main()
{
    vector<int> arr = {1,0,2,1,2,0,1,0,2};
    nodes* head = convertArr2LL(arr);
    cout << "Original Linked List : ";
    printLL(head);
    head = sortLL(head);
    cout << "Sorted Linked List : ";
    printLL(head);
    return 0;
}
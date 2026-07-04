// Add two numbers in Linked List
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
nodes* addTwoNumbers(nodes* head1, nodes* head2)
{
    nodes* t1 = head1;
    nodes* t2 = head2;
    int carry = 0;
    nodes* dummyNode = new nodes(-1);
    nodes* curr = dummyNode;
    while(t1 != NULL || t2 != NULL)
    {
        int sum = carry;
        if(t1 != NULL)
            sum += t1->data;
        if(t2 != NULL)
            sum += t2->data;
        nodes* newNode = new nodes(sum % 10);
        carry = sum / 10;
        curr->next = newNode;
        curr = curr->next;
        if(t1 != NULL)
            t1 = t1->next;
        if(t2 != NULL)
            t2 = t2->next;
    }
    if(carry != 0)
    {
        nodes* newNode = new nodes(carry);
        curr->next = newNode;
    }
    return dummyNode->next;
}
int main()
{
    vector<int> arr1 = {2,4,3};
    vector<int> arr2 = {5,6,4};
    nodes* head1 = convertArr2LL(arr1);
    nodes* head2 = convertArr2LL(arr2);
    cout << "First Linked List : ";
    printLL(head1);
    cout << "Second Linked List : ";
    printLL(head2);
    nodes* head = addTwoNumbers(head1, head2);
    cout << "Sum Linked List : ";
    printLL(head);
    return 0;
}
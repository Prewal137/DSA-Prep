// Find the intersection point of two linked lists
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
void printLL(nodes* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    // Common part
    nodes* common = new nodes(8);
    common->next = new nodes(10);
    common->next->next = new nodes(12);
    // First Linked List
    nodes* headA = new nodes(3);
    headA->next = new nodes(1);
    headA->next->next = common;
    // Second Linked List
    nodes* headB = new nodes(4);
    headB->next = new nodes(6);
    headB->next->next = new nodes(9);
    headB->next->next->next = common;
    cout << "Linked List A : ";
    printLL(headA);
    cout << "Linked List B : ";
    printLL(headB);
    if(headA == NULL || headB == NULL)
    {
        cout << "No Intersection";
        return 0;
    }
    nodes* t1 = headA;
    nodes* t2 = headB;
    while(t1 != t2)
    {
        if(t1 == NULL)
            t1 = headB;
        else
            t1 = t1->next;
        if(t2 == NULL)
            t2 = headA;
        else
            t2 = t2->next;
    }
    if(t1 != NULL)
        cout << "Intersection Node : " << t1->data;
    else
        cout << "No Intersection";
    return 0;
}
// Flatten a Linked List
#include<bits/stdc++.h>
using namespace std;
class nodes
{
public:
    int data;
    nodes* next;
    nodes* child;
    nodes(int data1)
    {
        data = data1;
        next = nullptr;
        child = nullptr;
    }
};
nodes* merge(nodes* list1, nodes* list2)
{
    nodes* dummyNode = new nodes(-1);
    nodes* temp = dummyNode;
    while(list1 != NULL && list2 != NULL)
    {
        if(list1->data < list2->data)
        {
            temp->child = list1;
            temp = list1;
            list1 = list1->child;
        }
        else
        {
            temp->child = list2;
            temp = list2;
            list2 = list2->child;
        }
        temp->next = NULL;
    }
    if(list1 != NULL)
        temp->child = list1;
    else
        temp->child = list2;
    if(dummyNode->child != NULL)
        dummyNode->child->next = NULL;
    return dummyNode->child;
}
nodes* flattenLL(nodes* head)
{
    if(head == NULL || head->next == NULL)
        return head;
    nodes* mergedHead = flattenLL(head->next);
    head = merge(head, mergedHead);
    return head;
}

void printChildList(nodes* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->child;
    }
    cout << endl;
}

int main()
{
    // Level 1
    nodes* head = new nodes(5);
    head->next = new nodes(10);
    head->next->next = new nodes(19);
    head->next->next->next = new nodes(28);
    // Children of 5
    head->child = new nodes(7);
    head->child->child = new nodes(8);
    head->child->child->child = new nodes(30);
    // Children of 10
    head->next->child = new nodes(20);
    // Children of 19
    head->next->next->child = new nodes(22);
    head->next->next->child->child = new nodes(50);
    // Children of 28
    head->next->next->next->child = new nodes(35);
    head->next->next->next->child->child = new nodes(40);
    head->next->next->next->child->child->child = new nodes(45);
    head = flattenLL(head);
    cout << "Flattened Linked List : ";
    printChildList(head);
    return 0;
}
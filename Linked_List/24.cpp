//Copy List with Random Pointer
#include<bits/stdc++.h>
using namespace std;
class nodes
{
public:
    int data;
    nodes* next;
    nodes* random;
    nodes(int data1)
    {
        data = data1;
        next = nullptr;
        random = nullptr;
    }
};
void printLL(nodes* head)
{
    while(head != NULL)
    {
        cout << "Node : " << head->data << " ";
        if(head->random != NULL)
            cout << "Random : " << head->random->data;
        else
            cout << "Random : NULL";
        cout << endl;
        head = head->next;
    }
}

nodes* copyRandomList(nodes* head)
{
    if(head == NULL)
        return NULL;
    nodes* temp = head;
    while(temp != NULL)
    {
        nodes* copyNode = new nodes(temp->data);
        copyNode->next = temp->next;
        temp->next = copyNode;
        temp = temp->next->next;
    }
    temp = head;
    while(temp != NULL)
    {
        nodes* copyNode = temp->next;
        if(temp->random != NULL)
            copyNode->random = temp->random->next;
        else
            copyNode->random = NULL;
        temp = temp->next->next;
    }
    nodes* dummyNode = new nodes(-1);
    nodes* res = dummyNode;
    temp = head;
    while(temp != NULL)
    {
        res->next = temp->next;
        res = res->next;
        temp->next = temp->next->next;
        temp = temp->next;
        if(temp != NULL)
            res->next = temp->next;
    }
    return dummyNode->next;
}
int main()
{
    nodes* head = new nodes(7);
    head->next = new nodes(13);
    head->next->next = new nodes(11);
    head->next->next->next = new nodes(10);
    head->next->next->next->next = new nodes(1);
    head->random = NULL;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head;
    cout << "Original Linked List :" << endl;
    printLL(head);
    nodes* copyHead = copyRandomList(head);
    cout << "\nCopied Linked List :" << endl;
    printLL(copyHead);
    return 0;
}
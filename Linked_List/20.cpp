// Remove Duplicates from Sorted Doubly Linked List
#include<bits/stdc++.h>
using namespace std;
class nodes
{
public:
    int data;
    nodes* next;
    nodes* back;
    nodes(int data1, nodes* next1, nodes* back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    nodes(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
nodes* convertArr2DLL(vector<int>& arr)
{
    nodes* head = new nodes(arr[0]);
    nodes* prev = head;
    for(int i = 1; i < arr.size(); i++)
    {
        nodes* temp = new nodes(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void printDLL(nodes* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
nodes* removeDuplicates(nodes* head)
{
    if(head == NULL || head->next == NULL)
        return head;
    nodes* temp = head;
    while(temp != NULL && temp->next != NULL)
    {
        nodes* nextNode = temp->next;
        while(nextNode != NULL && nextNode->data == temp->data)
        {
            nodes* duplicate = nextNode;
            nextNode = nextNode->next;
            delete duplicate;
        }
        temp->next = nextNode;
        if(nextNode != NULL)
            nextNode->back = temp;
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {1,1,2,2,2,3,4,4,5,5,6};
    nodes* head = convertArr2DLL(arr);
    cout << "Original Doubly Linked List : ";
    printDLL(head);
    head = removeDuplicates(head);
    cout << "After Removing Duplicates : ";
    printDLL(head);
    return 0;
}
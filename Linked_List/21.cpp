// Reverse Nodes in K Groups
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
nodes* reverseLL(nodes* head)
{
    if(head == NULL || head->next == NULL)
        return head;
    nodes* newHead = reverseLL(head->next);
    nodes* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

nodes* findKthNode(nodes* temp, int k)
{
    k--;
    while(temp != NULL && k > 0)
    {
        k--;
        temp = temp->next;
    }
    return temp;
}

nodes* reverseKGroup(nodes* head, int k)
{
    nodes* temp = head;
    nodes* nextNode;
    nodes* prevNode = NULL;
    while(temp != NULL)
    {
        nodes* kthNode = findKthNode(temp, k);
        if(kthNode == NULL)
        {
            if(prevNode != NULL)
                prevNode->next = temp;

            break;
        }
        nextNode = kthNode->next;
        kthNode->next = NULL;
        reverseLL(temp);
        if(temp == head)
            head = kthNode;
        else
            prevNode->next = kthNode;
        prevNode = temp;
        temp = nextNode;
    }
    return head;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8};
    nodes* head = convertArr2LL(arr);
    cout << "Original Linked List : ";
    printLL(head);
    int k;
    cout << "Enter the value of k : ";
    cin >> k;
    head = reverseKGroup(head, k);
    cout << "Linked List after reversing in groups : ";
    printLL(head);
    return 0;
}
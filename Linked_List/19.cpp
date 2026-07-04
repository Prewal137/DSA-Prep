// Find Pairs with Given Sum in Sorted Doubly Linked List
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
nodes* findTail(nodes* head)
{
    nodes* tail = head;

    while(tail->next != NULL)
        tail = tail->next;
    return tail;
}
void findPairs(nodes* head, int k)
{
    if(head == NULL)
        return;
    nodes* left = head;
    nodes* right = findTail(head);
    cout << "Pairs are : " << endl;
    while(left->data < right->data)
    {
        int sum = left->data + right->data;
        if(sum == k)
        {
            cout << "(" << left->data << ", " << right->data << ")" << endl;
            left = left->next;
            right = right->back;
        }
        else if(sum < k)
        {
            left = left->next;
        }
        else
        {
            right = right->back;
        }
    }
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    nodes* head = convertArr2DLL(arr);
    cout << "Doubly Linked List : ";
    printDLL(head);
    int k;
    cout << "Enter the target sum : ";
    cin >> k;
    findPairs(head, k);
    return 0;
}
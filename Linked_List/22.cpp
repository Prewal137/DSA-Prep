// Rotate Linked List
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
nodes* findLastNode(nodes* temp, int k)
{
    int cnt = 1;
    while(temp != NULL)
    {
        if(cnt == k)
            return temp;
        cnt++;
        temp = temp->next;
    }
    return temp;
}

nodes* rotateRight(nodes* head, int k)
{
    if(head == NULL || head->next == NULL || k == 0)
        return head;
    nodes* tail = head;
    int len = 1;
    while(tail->next != NULL)
    {
        len++;
        tail = tail->next;
    }
    k = k % len;
    if(k == 0)
        return head;

    tail->next = head;
    nodes* newLast = findLastNode(head, len - k);
    head = newLast->next;
    newLast->next = NULL;
    return head;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    nodes* head = convertArr2LL(arr);
    cout << "Original Linked List : ";
    printLL(head);
    int k;
    cout << "Enter the value of k : ";
    cin >> k;
    head = rotateRight(head, k);
    cout << "Linked List after rotation : ";
    printLL(head);
    return 0;
}
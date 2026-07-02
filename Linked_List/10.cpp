//Segregating odd and even index nodes in a linked list
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
int main()
{
    vector<int> arr = {2,3,6,7,8};
    nodes* head = convertArr2LL(arr);
    nodes* odd=head;
    nodes* even=head->next;
    nodes* evenHead=head->next;
    while(even!=NULL && even->next!=NULL)
    {
        odd->next=odd->next->next;
        odd=odd->next;
        even->next=even->next->next;
        even=even->next;
    }
    odd->next=evenHead;
    cout<<"Segregating odd and even nodes Linked list : ";
    printLL(head);
    return 0;
}
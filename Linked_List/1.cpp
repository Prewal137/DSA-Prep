//converting array to linked list
//traversing linked list
//length of linked list
//searching an element in linked list
#include<bits/stdc++.h>
using namespace std;
class nodes
{
    public:
    int data;
    nodes* next;
    public:
    nodes(int data1,nodes* next1)
    {
        data=data1;
        next=next1;
    }
    nodes(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
nodes* convertArr2LL(vector<int>&arr)
{
    nodes* head=new nodes(arr[0]);
    nodes* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        nodes* temp=new nodes(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
int lengthOfLL(nodes* head)
{
    nodes* temp=head;
    int count=0;
    while(temp)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
bool searchElement(nodes* head,int val)
{
    nodes* temp=head;
    while(temp)
    {
        if(temp->data==val)
            return true;
        temp=temp->next;
    }
    return false;
}
int main()
{
    vector<int>arr={2,3,6,7,8};
    nodes* head=convertArr2LL(arr);
    nodes* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n Length of the linked list : "<<lengthOfLL(head)<<endl;
    int val;
    cout<<"Enter the element you want to search: ";
    cin>>val;
    cout<<searchElement(head,val);
    return 0;
}
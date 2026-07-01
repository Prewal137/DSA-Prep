//Length of the loop in Linked List
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
int main()
{
    vector<int> arr = {2,3,6,7,8};
    nodes* head = convertArr2LL(arr);
    // Create a loop
    head->next->next->next->next->next = head->next;
    nodes* slow = head;
    nodes* fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            int cnt=1;
            fast=fast->next;
            while(slow!=fast)
            {
                cnt++;
                fast=fast->next;
            }
            cout << "Length of loop is : " << cnt << endl;
            break;
        }
    }
    return 0;
}